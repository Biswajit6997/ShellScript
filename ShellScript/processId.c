// write a programme to print process id and current processid of its parent process
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid;

    // Create a child process
    pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
        // This is the child process
        printf("Child process is sleeping for 3 seconds...\n");
        sleep(3);
        printf("Child process woke up.\n");
    } else {
        // This is the parent process
        printf("Parent process is sleeping for 5 seconds...\n");
        sleep(5);
        printf("Parent process woke up.\n");
    }

    return 0;
}