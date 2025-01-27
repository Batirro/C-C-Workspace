#include <stdio.h>
#include <stdlib.h>

char *usun_drugi_wyraz(const char *tekst)
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
    char *t1 = usun_drugi_wyraz("Ala ma kota");
    printf("%s\n", t1);
    free(t1);
    return 0;
}