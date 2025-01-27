#include <stdio.h>

int dlugoscNajkrotszego(const char *tekst)
{
    // Sprawdzenie poprawności parametru
    if (tekst == NULL)
    {
        return -1;
    }

    // Inicjalizacja zmiennych
    int aktDlugosc = 0;
    int minDlugosc = -1;
    int i = 0;

    // Przejście przez cały tekst
    while (tekst[i] != '\0')
    {
        // Pomijanie białych znaków na początku wyrazu
        while (tekst[i] == ' ' || tekst[i] == '\t')
        {
            i++;
        }

        // Liczenie długości bieżącego wyrazu
        aktDlugosc = 0;
        while (tekst[i] != ' ' && tekst[i] != '\0' && tekst[i] != '\t')
        {
            aktDlugosc++;
            i++;
        }

        // Aktualizacja minimalnej długości
        if (aktDlugosc > 0)
        {
            if (minDlugosc == -1 || aktDlugosc < minDlugosc)
            {
                minDlugosc = aktDlugosc;
            }
        }
    }

    return minDlugosc;
}

// Przykład użycia
int main()
{
    const char *tekst1 = "Ala ma kota";
    const char *tekst2 = "Programowanie w jezyku C";
    const char *tekst3 = "";

    printf("Najkrótsza długość w '%s': %d\n", tekst1, dlugoscNajkrotszego(tekst1));
    printf("Najkrótsza długość w '%s': %d\n", tekst2, dlugoscNajkrotszego(tekst2));
    printf("Najkrótsza długość w '%s': %d\n", tekst3, dlugoscNajkrotszego(tekst3));

    return 0;
}