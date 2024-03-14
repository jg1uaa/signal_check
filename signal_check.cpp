// SPDX-License-Identifier: WTFPL

#include "syslog.h"
#include <unistd.h>
#include <iostream>
#include <csignal>

void SigHandler(int sig)
{
	std::cout << "signal " << sig << std::endl;
}

int main(int argc, char *argv[])
{
	syslog::redirect cout_redir(std::cout);
	syslog::redirect cerr_redir(std::cerr);
	syslog::redirect clog_redir(std::clog);

#ifdef SIGABRT
	std::signal(SIGABRT, SigHandler);
#endif
#ifdef SIGALRM
	std::signal(SIGALRM, SigHandler);
#endif
#ifdef SIGBUS
	std::signal(SIGBUS, SigHandler);
#endif
#ifdef SIGCHLD
	std::signal(SIGCHLD, SigHandler);
#endif
#ifdef SIGCKPT
	std::signal(SIGCKPT, SigHandler);
#endif
#ifdef SIGCKPTEXIT
	std::signal(SIGCKPTEXIT, SigHandler);
#endif
#ifdef SIGCONT
	std::signal(SIGCONT, SigHandler);
#endif
#ifdef SIGEMT
	std::signal(SIGEMT, SigHandler);
#endif
#ifdef SIGFPE
	std::signal(SIGFPE, SigHandler);
#endif
#ifdef SIGHUP
	std::signal(SIGHUP, SigHandler);
#endif
#ifdef SIGILL
	std::signal(SIGILL, SigHandler);
#endif
#ifdef SIGINFO
	std::signal(SIGINFO, SigHandler);
#endif
#ifdef SIGINT
	std::signal(SIGINT, SigHandler);
#endif
#ifdef SIGIO
	std::signal(SIGIO, SigHandler);
#endif
#ifdef SIGIOT
	std::signal(SIGIOT, SigHandler);
#endif
#ifdef SIGKILL
	std::signal(SIGKILL, SigHandler);
#endif
#ifdef SIGLIBRT
	std::signal(SIGLIBRT, SigHandler);
#endif
#ifdef SIGLOST
	std::signal(SIGLOST, SigHandler);
#endif
#ifdef SIGLWP
	std::signal(SIGLWP, SigHandler);
#endif
#ifdef SIGPIPE
	std::signal(SIGPIPE, SigHandler);
#endif
#ifdef SIGPOLL
	std::signal(SIGPOLL, SigHandler);
#endif
#ifdef SIGPROF
	std::signal(SIGPROF, SigHandler);
#endif
#ifdef SIGPWR
	std::signal(SIGPWR, SigHandler);
#endif
#ifdef SIGQUIT
	std::signal(SIGQUIT, SigHandler);
#endif
#ifdef SIGSEGV
	std::signal(SIGSEGV, SigHandler);
#endif
#ifdef SIGSTKFLT
	std::signal(SIGSTKFLT, SigHandler);
#endif
#ifdef SIGSTOP
	std::signal(SIGSTOP, SigHandler);
#endif
#ifdef SIGSYS
	std::signal(SIGSYS, SigHandler);
#endif
#ifdef SIGTERM
	std::signal(SIGTERM, SigHandler);
#endif
#ifdef SIGTHR
	std::signal(SIGTHR, SigHandler);
#endif
#ifdef SIGTRAP
	std::signal(SIGTRAP, SigHandler);
#endif
#ifdef SIGTSTP
	std::signal(SIGTSTP, SigHandler);
#endif
#ifdef SIGTTIN
	std::signal(SIGTTIN, SigHandler);
#endif
#ifdef SIGTTOU
	std::signal(SIGTTOU, SigHandler);
#endif
#ifdef SIGUNUSED
	std::signal(SIGUNUSED, SigHandler);
#endif
#ifdef SIGURG
	std::signal(SIGURG, SigHandler);
#endif
#ifdef SIGUSR1
	std::signal(SIGUSR1, SigHandler);
#endif
#ifdef SIGUSR2
	std::signal(SIGUSR2, SigHandler);
#endif
#ifdef SIGVTALRM
	std::signal(SIGVTALRM, SigHandler);
#endif
#ifdef SIGWINCH
	std::signal(SIGWINCH, SigHandler);
#endif
#ifdef SIGXCPU
	std::signal(SIGXCPU, SigHandler);
#endif
#ifdef SIGXFSZ
	std::signal(SIGXFSZ, SigHandler);
#endif
	pause();

	return 0;
}
