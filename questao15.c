#include <stdio.h>
#include <string.h>

int main() {
    char first_name[100], last_name[100], full_name[200];

    printf("Enter the first name: ");
    scanf("%s", first_name);

    printf("Enter the last name: ");
    scanf("%s", last_name);

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

    printf("Full name: %s\n", full_name);

    return 0;
}
