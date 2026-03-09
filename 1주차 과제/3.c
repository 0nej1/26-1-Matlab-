#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
    char **p;
    p = (char **)malloc(5 * sizeof(char *));

    for (int i = 0; i < 5; i++) {
        p[i] = (char *)malloc(16 * sizeof(char));
    }

    for (int i = 0; i < 5; i++) {
        gets(p[i]);
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (p[j][i] != '\0') {
                printf("%c", p[j][i]);
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        free(p[i]);
    }
    free(p);

    return 0;
}