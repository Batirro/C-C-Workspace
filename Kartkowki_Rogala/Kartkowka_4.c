#include <stdio.h>

// Struktura danych
typedef unsigned char uint8_t; // Typ danych dla unsigned char

int main() {
    // Dane: tablice z wartościami
    uint8_t tab_a[] = {4, 3, 1, 9, 0};
    uint8_t tab_b[] = {7, 9, 1, 0};
    uint8_t tab_c[] = {3, 6, 0};
    
    // Tablica wskaźników na tablice
    uint8_t *tab[] = {tab_a, tab_b, tab_c};
    uint8_t **wsk = tab; // Wskaźnik na tablicę wskaźników

    // Liczba elementów w poszczególnych tablicach
    int sizes[] = {5, 4, 3};

    // Obliczanie sumy elementów podzielnych przez 3
    int suma = 0;
    for (int i = 0; i < 3; i++) { // Iteracja po tablicach
        for (int j = 0; j < sizes[i]; j++) { // Iteracja po elementach tablicy
            if (wsk[i][j] % 3 == 0) {
                suma += wsk[i][j];
            }
        }
    }

    // Wypisanie wyniku
    printf("Suma elementów podzielnych przez 3: %d\n", suma);

    return 0;
}
