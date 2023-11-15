#include "shell.h"

int main() {
    char command[MAX_COMMAND_LENGTH];

    while (1) {
        printf("$ ");
        fgets(command, MAX_COMMAND_LENGTH, stdin);

    
        command[strcspn(command, "\n")] = '\0';


        if (strcmp(command, "exit") == 0) {
            break;
        }

        executCmd(command);
    }

    return 0;
}
