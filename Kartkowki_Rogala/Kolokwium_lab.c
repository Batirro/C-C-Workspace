#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h> // Potrzebne do bool
#include <time.h>    // Generowanie liczb
// Prototypy funkcji
double SUMA_SZEREGU(double eps);
void usunSamogloski(char *tekst);
void TABLICA_IND(float tab[]);
void TABLICA_WSK(float *tab);
void TABELKA(int rows, int cols);

#define SIZE 10 // Potrzebne do zadania 3

int main()
{
    // Zadanie 1
    double eps;

    printf("Podaj dokladnosc obliczen (EPS, 0 < EPS < 1): ");
    scanf("%lf", &eps);
    double result = SUMA_SZEREGU(eps);
    printf("Suma szeregu: %.10f\n", result);

    // Zadanie 2
    char tekst[50];
    printf("Podaj tekst: ");
    scanf("%s", tekst);
    usunSamogloski(tekst);
    printf("Tekst bez samoglosek: %s\n", tekst);

    // Zadanie 3
    float tablica[SIZE];
    srand(time(NULL));
    printf("TABLICA_IND:\n");
    TABLICA_IND(tablica);
    printf("TABLICA_WSK:\n");
    TABLICA_WSK(tablica);

    // Zadanie 4
    int rows, cols;
    printf("Podaj liczbe wierszy (1-12): ");
    scanf("%d", &rows);
    printf("Podaj liczbe kolumn (1-12): ");
    scanf("%d", &cols);
    TABELKA(rows, cols);

    return 0;
}
// Zadanie 1
double SUMA_SZEREGU(double eps)
{
    double sum = 0.0;
    int k = 1;
    double term;

    while (true)
    {
        term = pow(-1, k + 1) * 4.0 / (2.0 * k - 1.0);
        if (fabs(term) < eps)
        {
            break;
        }
        sum += term;
        k++;
    }
    return sum;
}
// Zadanie 2
void usunSamogloski(char *tekst)
{
    int i = 0;
    int j = 0;
    while (tekst[i] != '\0')
    {
        if (tekst[i] != 'a' && tekst[i] != 'e' && tekst[i] != 'i' && tekst[i] != 'o' && tekst[i] != 'u' && tekst[i] != 'y')
        {
            tekst[j] = tekst[i];
            j++;
        }
        i++;
    }
    tekst[j] = '\0';
}

// Zadanie 3
void TABLICA_IND(float tab[])
{
    float min = 50.0, max = 0.0;
    for (int i = 0; i < SIZE; i++)
    {
        tab[i] = (float)(rand() % 501) / 10;
        printf("%.1f ", tab[i]);
        if (tab[i] < min)
            min = tab[i];
        if (tab[i] > max)
            max = tab[i];
    }
    printf("\nMinimalna: %.1f, Maksymalna: %.1f\n", min, max);
}

void TABLICA_WSK(float *tab)
{
    float min = 50.0, max = 0.0;
    for (int i = 0; i < SIZE; i++)
    {
        *(tab + i) = (float)(rand() % 501) / 10;
        printf("%.1f ", *(tab + i));
        if (*(tab + i) < min)
            min = *(tab + i);
        if (*(tab + i) > max)
            max = *(tab + i);
    }
    printf("\nMinimalna: %.1f, Maksymalna: %.1f\n", min, max);
}

// Zadanie 4
void TABELKA(int rows, int cols)
{
    // Rysowanie górnej ramki

    printf("+-----+");

    for (int j = 1; j <= cols; j++)
    {

        printf("-----+");
    }

    printf("\n");

    // Rysowanie nagłówka kolumn

    printf("|     |");

    for (int j = 1; j <= cols; j++)
    {

        printf(" %2d  |", j); // Nagłówki kolumn
    }

    printf("\n");

    // Rysowanie dolnej ramki nagłówka

    printf("|-----|");

    for (int j = 0; j < cols; j++)
    {

        printf("-----+");
    }

    printf("\n");

    // Rysowanie wierszy tabeli

    for (int i = 1; i <= rows; i++)
    {

        printf("| %2d  |", i); // Wypisanie numeru wiersza

        for (int j = 1; j <= cols; j++)
        {

            printf(" %2d  |", i * j); // Wypisanie wyniku mnożenia
        }

        printf("\n");

        // Rysowanie dolnej ramki

        printf("|-----|");

        for (int j = 0; j < cols; j++)
        {

            printf("-----+");
        }

        printf("\n");
    }
}