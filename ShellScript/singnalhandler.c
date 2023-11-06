#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
void sigint_handler(int signal) {
    printf("Caught SIGINT signal. Exiting...\n");
    exit(0);
}

int main() {
    if (signal(SIGINT, sigint_handler) == SIG_ERR) {
        perror("Signal registration failed");
        return 1;
    }

    printf("Signal handling example. Press Ctrl+C to exit.\n");

    while (1) {
    }

    return 0;
}