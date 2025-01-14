#include <stdio.h>
#include <stdlib.h>

void podpunkt_a(char lancuch[]) {
    for (int i = 0; lancuch[i] != '\0'; i++) {
        if (lancuch[i] >= 'a' && lancuch[i] <= 'z') {
            for (int j = i; lancuch[j] != '\0'; j++) {
                lancuch[j] = lancuch[j+1];
            }
            break;
        }
    }
    printf("Nowy lancuch: %s\n", lancuch);
}

void podpunkt_b(char lancuch[]) {
    int i;
    for (i = 0; lancuch[i] == ' '; i++);

    if (i > 0) {
        int j;
        for(j = 0; lancuch[i] != '\0'; j++, i++){
           lancuch[j] = lancuch[i]; 
        }
        lancuch[j] = '\0';
    }
    printf("Nowy lancuch: %s\n", lancuch);
}

void podpunkt_c(char lancuch[]) {
    int i;
    for (i = 0; lancuch[i] == ' '; i++);

    if (i > 0) {
        int j;
        for(j = 0; lancuch[i] != ' '; j++, i++){
           lancuch[j] = lancuch[i]; 
        }
        lancuch[j] = '\0';
    }
    printf("Nowy lancuch: %s\n", lancuch);
}

int main() {
    char lancuch[] = " ";
    printf("Podaj lancuch znakow: ");
    scanf("%s", lancuch);
    int wybor;
    printf("Podaj jaki podpunkt chcesz wybrac: ");
    scanf("%d", &wybor);
    switch (wybor) {
        case 1:
            podpunkt_a(lancuch);
            break;
        case 2:
            podpunkt_b(lancuch);
            break;
        case 3:
            podpunkt_c(lancuch);
            break;
        default:
            printf("Nie ma takiego podpunktu\n");
            break;
    }
}


