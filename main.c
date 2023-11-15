#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
    char command[100];
    char *args[20];
    int status;

    while (1) {
        printf("$ ");
        fgets(command, 100, stdin);
        command[strcspn(command, "\n")] = 0;

        if (strcmp(command, "exit") == 0) {
            break;
        } else {
            // Tokenize the command gets from the user to get the arguments
            char *token = strtok(command, " ");
            int i = 0;
            while (token != NULL) {
                args[i] = token;
                token = strtok(NULL, " ");
                i++;
            }
            args[i] = NULL;
    }

    return 0;
    }
}
