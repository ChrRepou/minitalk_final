/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:40:55 by crepou            #+#    #+#             */
/*   Updated: 2023/01/21 10:55:11 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cs.h"

static void	process_exists(pid_t pid)
{
	if (kill(pid, 0) < 0)
	{
		ft_printf("An error occured during the process\n");
		exit(EXIT_FAILURE);
	}
}

static void	handler(int signal, siginfo_t *client, void *ucontext)
{
	static int				shift = -1;
	static unsigned char	c;

	(void) ucontext;
	process_exists(client->si_pid);
	if (shift < 0)
		shift = 7;
	if (signal == SIGUSR1)
		c |= (1 << shift);
	shift--;
	if (shift < 0 && c)
	{
		ft_putchar_fd(c, 1);
		c = 0;
	}
	else if (shift < 0 && !c)
		kill(client->si_pid, SIGUSR2);
	kill(client->si_pid, SIGUSR1);
}

int	main(void)
{
	pid_t				pid;
	struct sigaction	sig;

	sig.sa_flags = SA_SIGINFO | SA_RESTART;
	sig.sa_sigaction = handler;
	sigemptyset(&(sig.sa_mask));
	pid = getpid();
	ft_printf("Server PID is : %d\n", pid);
	sigaction(SIGUSR2, &sig, NULL);
	sigaction(SIGUSR1, &sig, NULL);
	while (1)
		sleep(1);
}
