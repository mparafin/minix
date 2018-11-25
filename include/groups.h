#ifndef _GROUPS_H_
#define _GROUPS_H_

#include <lib.h>

int getprocgr(pid_t pid){
	message m;
	m.m1_i1 = pid;
	return _syscall(MM, GETPROCGR, &m);
}

int switchprocgr(pid_t pid){
	message m;
	m.m1_i1 = pid;
	return _syscall(MM, SWITCHPROCGR, &m);
}

#endif