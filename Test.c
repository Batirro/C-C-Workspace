#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funkcja generująca losowy ciąg znaków
void generuj_ciag_znakow(const char *nazwa_pliku, int dlugosc)
{
    // Inicjalizacja generatora liczb losowych
    srand(time(NULL));

    // Otwarcie pliku do zapisu binarnego
    FILE *plik = fopen(nazwa_pliku, "wb");

    // Sprawdzenie poprawności otwarcia pliku
    if (plik == NULL)
    {
        printf("Błąd otwarcia pliku\n");
        return;
    }

    // Generowanie losowych znaków
    for (int i = 0; i < dlugosc; i++)
    {
        // Losowanie znaku z zakresu 'a' do 'z'
        char znak = 'a' + rand() % 26;

        // Zapis znaku do pliku
        fputc(znak, plik);
    }

    // Zamknięcie pliku
    fclose(plik);

    printf("Wygenerowano plik %s o długości %d znaków\n", nazwa_pliku, dlugosc);
}

// Funkcja wyświetlająca zawartość pliku (opcjonalna)
void wyswietl_zawartosc(const char *nazwa_pliku)
{
    FILE *plik = fopen(nazwa_pliku, "rb");

    if (plik == NULL)
    {
        printf("Błąd otwarcia pliku\n");
        return;
    }

    printf("Zawartość pliku:\n");

    int znak;
    while ((znak = fgetc(plik)) != EOF)
    {
        printf("%c", znak);
    }
    printf("\n");

    fclose(plik);
}

int main()
{
    // Generowanie pliku o długości 1000 znaków
    generuj_ciag_znakow("E:\\C-C-Workspace\\Kolokwia podstawy programowania\\C\\Kolokwium_2\\Dane\\dane.dat", 1000);

    // Opcjonalne wyświetlenie zawartości pliku
    // wyswietl_zawartosc("dane.dat");

    return 0;
}