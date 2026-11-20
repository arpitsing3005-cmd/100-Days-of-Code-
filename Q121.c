#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    scanf("%99s", name);
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("File creation failed");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("Data saved successfully");

    return 0;
}