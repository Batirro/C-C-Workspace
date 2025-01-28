#include <stdio.h>
#include <stdlib.h>

void zadanie_3_f()
{
    short liczba;
    int pozycja = -1;
    FILE *plik = fopen("E:\\C-C-Workspace\\Kolokwia podstawy programowania\\C\\Kolokwium_2\\Dane\\zadanie_3_f.txt", "r");
    if (plik == NULL)
    {
        exit(EXIT_FAILURE);
    }
    while (fscanf(plik, "%hd", &liczba) == 1)
    {
        pozycja++;
        if (liczba < 0)
        {
            printf("Pierwsza liczba ujemna występuje na pozycji %d\n", pozycja);
            break;
        }
    }
    fclose(plik);
    if (pozycja == -1)
    {
        printf("Nie znaleziono liczby ujemnej w pliku.\n");
    }
}

void zadanie_3_g()
{
    float liczba;
    float suma = 0;
    float srednia = 0;
    int ilosc_liczb = 0;
    FILE *plik = fopen("E:\\C-C-Workspace\\Kolokwia podstawy programowania\\C\\Kolokwium_2\\Dane\\zadanie_3_g.txt", "r+");
    if (plik == NULL)
    {
        printf("Nie udalo się otworzyc pliku\n");
    }
    while (fscanf(plik, "%f", &liczba) == 1)
    {
        suma += liczba;
        ilosc_liczb++;
    }
    srednia = suma / ilosc_liczb;
    fseek(plik, 0, SEEK_END);
    fprintf(plik, " %f", srednia);
    fclose(plik);
}

void zadanie_3_h()
{
    int i = 0;
    FILE *plik = fopen("E:\\C-C-Workspace\\Kolokwia podstawy programowania\\C\\Kolokwium_2\\Dane\\zadanie_3_h.txt", "r+");
    if (plik == NULL)
    {
        printf("Nie udalo sie otworzyc pliku\n");
    }
    fseek(plik, 0, SEEK_END);
    long rozmiar = ftell(plik);
    rewind(plik);
    char *bufor = (char *)malloc(rozmiar + 1);
    fread(bufor, 1, rozmiar, plik);
    int ilosc_liczb = 0;
    while (bufor[i] != '\0')
    {
        if (bufor[i] != ' ' && bufor[i] != '\n')
        {
            ilosc_liczb++;
        }
        i++;
    }
    if (bufor[i - 1] != ' ' && bufor[i - 1] != '\n')
    {
        ilosc_liczb++;
    }
    fclose(plik);

    plik = fopen("E:\\C-C-Workspace\\Kolokwia podstawy programowania\\C\\Kolokwium_2\\Dane\\zadanie_3_h.txt", "w+");
    fprintf(plik, "%d ", ilosc_liczb);
    fwrite(bufor, 1, rozmiar, plik);
    fclose(plik);
    free(bufor);
}

int main()
{
    // Zadanie 3 f
    zadanie_3_f();
    // Zadanie 3 g
    zadanie_3_g();
    // Zadanie 3 h
    zadanie_3_h();
}