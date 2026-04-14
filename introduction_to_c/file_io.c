#include <stdio.h>

int write_file() {
    FILE *file = fopen("example.txt", "w");

    if (file == NULL) {
        printf("Error creating file\n");
        return 1;
    }

    fprintf(file, "Hello from the file on the first line!\nSecond line\nThird line");
    fclose(file);
    printf("File was created\n");

    return 0;
}

void read_file() {
    FILE *file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Error opening file\n");
        return;
    }

    char buffer[121]; // max ~120 characters + '\0' per line at time 

    while (fgets(buffer, sizeof(buffer), file) != NULL) { // read a line of text from file into the buffer
        printf("%s", buffer);
    }

    fclose(file);
}

int main() {
    if (write_file() != 0) {
        return 1;
    }

    read_file();

    return 0;
}
