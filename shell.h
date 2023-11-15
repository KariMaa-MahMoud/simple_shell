#ifndef KM_SHELL_H_
#define KM_SHELL_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h> 
#include <errno.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <fcntl.h>
#include <process.h>

#define MAX_COMMAND_LENGTH 100

void executCmd(char* command) {

    pid_t pid = fork();

    if (pid == -1) {
        printf("Unable to create a child process\n");
        exit(1);
    } else if (pid == 0) {

        system(command);
        exit(0);
    } else {

        wait(NULL);
    }
}

#endif
