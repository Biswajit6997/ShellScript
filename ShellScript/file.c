#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("example.txt", "w");

    if (file == NULL) {
        perror("Error opening the file");
        return 1;
    }
    fprintf(file, "Hello, World!\n");
    fprintf(file, "This is a sample file.\n");
    fclose(file);
    file = fopen("example.txt", "r");

    if (file == NULL) {
        perror("Error opening the file for reading");
        return 1;
    }
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);
    file = fopen("example.txt", "a");

    if (file == NULL) {
        perror("Error opening the file for appending");
        return 1;
    }
    fprintf(file, "Appending new data to the file.\n");

    fclose(file);

    return 0;
}