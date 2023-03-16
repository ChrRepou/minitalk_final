/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:54:14 by crepou            #+#    #+#             */
/*   Updated: 2023/01/21 11:11:28 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cs.h"

int	g_received = 0;

static void	handler(int sig, siginfo_t *client, void *ucontext)
{
	(void) ucontext;
	if (sig == SIGUSR1)
		g_received = 1;
	else if (sig == SIGUSR2)
	{
		ft_printf("PID %d: Message succesfully sent!", client->si_pid);
		exit(EXIT_SUCCESS);
	}
}

static void	char_handler(int pid, unsigned char c)
{
	unsigned char	mask;

	mask = 1u << 7;
	while (mask)
	{
		usleep(100);
		g_received = 0;
		if (mask & c)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		if (!g_received)
			usleep(20);
		mask >>= 1;
	}
}

static void	client(int pid, char *msg)
{
	int	i;

	i = -1;
	while (msg[++i])
		char_handler(pid, msg[i]);
	char_handler(pid, 0);
}

int	main(int argc, char *argv[])
{
	pid_t				pid;
	struct sigaction	sig;

	if (argc != 3)
	{
		ft_printf("Usage : ./client <pid> <message_to_send>\n");
		exit(EXIT_FAILURE);
	}
	sig.sa_flags = SA_SIGINFO | SA_RESTART;
	sig.sa_sigaction = handler;
	sigemptyset(&(sig.sa_mask));
	sigaction(SIGUSR2, &sig, NULL);
	sigaction(SIGUSR1, &sig, NULL);
	pid = ft_atoi(argv[1]);
	if (!pid)
	{
		ft_printf("PID is not correct!\n");
		exit(EXIT_FAILURE);
	}
	client(pid, argv[2]);
	return (0);
}
