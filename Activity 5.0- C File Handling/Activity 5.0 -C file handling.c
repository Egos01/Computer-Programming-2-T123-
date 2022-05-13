#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * fptr;
    int i, n;
    char str[50];
    char fname[30];

    printf("Input the file location: ");
    scanf("%s", fname);
    fptr = fopen(fname, "w");
    printf("Input how many lines to be appended: ");
    scanf("%d", & n);
    printf("The lines are :\n");
    for (i = 0; i < n + 1; i++) {
        fgets(str, sizeof str, stdin);
        fputs(str, fptr);
    }
    return 0;
}
