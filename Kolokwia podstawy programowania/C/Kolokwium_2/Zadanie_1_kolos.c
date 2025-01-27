#include <stdio.h>
#include <stdlib.h>

char *zadanie_1_f(char *tekst, char *nowy_wyraz)
{
    // Znajdź koniec pierwszego wyrazu
    int i = 0;
    while (tekst[i] != ' ' && tekst[i] != '\0')
    {
        i++;
    }

    // Oblicz długości
    int dlugoscNowego = 0;
    while (nowy_wyraz[dlugoscNowego] != '\0')
    {
        dlugoscNowego++;
    }

    int dlugoscReszty = 0;
    while (tekst[i + 1 + dlugoscReszty] != '\0')
    {
        dlugoscReszty++;
    }

    // Alokuj pamięć dla nowego tekstu
    char *wynik = malloc(dlugoscNowego + dlugoscReszty + 2); // +2 dla spacji i '\0'
    if (wynik == NULL)
    {
        return NULL; // Błąd alokacji pamięci
    }

    // Skopiuj nowy wyraz
    int j = 0;
    while (nowy_wyraz[j] != '\0')
    {
        wynik[j] = nowy_wyraz[j];
        j++;
    }

    // Dodaj spację, jeśli reszta tekstu nie jest pusta
    if (dlugoscReszty > 0)
    {
        wynik[j] = ' ';

        // Kopiowanie reszty tekstu
        int k = 0;
        while (tekst[i + 1 + k] != '\0')
        {
            wynik[j + 1 + k] = tekst[i + 1 + k];
            k++;
        }
        wynik[j + 1 + k] = '\0';
    }
    else
    {
        wynik[j] = '\0';
    }

    return wynik;
}

void zadanie_1_g(char *tekst)
{
    int dlugosc_wyrazu = 0;
    int min_dlugosc = -1;
    int i = 0;
    while (tekst[i] != '\0')
    {
        dlugosc_wyrazu = 0;
        while (tekst[i] != ' ' && tekst[i] != '\0')
        {
            dlugosc_wyrazu++;
            i++;
        }
        i++;
        if (dlugosc_wyrazu > 0)
        {
            if (min_dlugosc == -1 || dlugosc_wyrazu < min_dlugosc)
            {
                min_dlugosc = dlugosc_wyrazu;
            }
        }
    }
    printf("Najmniejsza dlugosc wyrazu to: %d\n", min_dlugosc);
}

char *zadanie_1_h(char *tekst)
{
    int dlugosc_wyrazu = 0;
    while (tekst[dlugosc_wyrazu] != '\0')
    {
        dlugosc_wyrazu++;
    }
    char *wynik = malloc(dlugosc_wyrazu + 1);
    int i = 0, j = 0, w = 0;

    while (tekst[i])
    {
        if (tekst[i] == ' ')
            w++;
        if (w != 1)
            wynik[j++] = tekst[i];
        i++;
    }

    wynik[j] = 0;
    return wynik;
}

int main()
{
    // Zadanie 1_f
    char tekst_f[] = "Super jest to kolokwium";
    char nowy_wyraz[] = "Zjebane";
    char *nowy_tekst = zadanie_1_f(tekst_f, nowy_wyraz);
    printf("Nowy tekst: %s\n", nowy_tekst);
    free(nowy_tekst);
    // Zadanie_1_g
    char tekst_g[] = "Najdluzszy napis c";
    zadanie_1_g(tekst_g);
    // Zadanie_1_h
    char tekst_h[] = "Ala nie ma kota";
    char *wynik_h[] = zadanie_1_h(tekst_h);
    printf("Nowy tekst: %s", wynik_h);
}