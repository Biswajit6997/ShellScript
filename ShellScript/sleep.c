// wap a program to create a chiled process with sleep command
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid;

    pid = fork(); // Create a child process

    if (pid < 0) {
        // Forking failed
        fprintf(stderr, "Fork failed\n");
        return 1;
    }

    if (pid == 0) {
        // This code is executed by the child process
        printf("Child process is sleeping for 5 seconds...\n");
        sleep(5); // Sleep for 5 seconds
        printf("Child process woke up.\n");
    } else {
        // This code is executed by the parent process
        printf("Parent process is waiting for the child to finish.\n");
        wait(NULL); // Wait for the child process to finish
        printf("Parent process has finished waiting.\n");
    }

    return 0;
}
