#include <stdio.h>
#include <stdlib.h> // Chyba operacje na plikach
#include <locale.h> // Polskie znaki w terminalu

// Struktura danych do popdunktu g
struct wyniki
{
    int powtorzenia;
};

void podpunkt_a()
{
    FILE *plik;
    plik = fopen("E:\\C-C-Workspace\\Kolokwia podstawy programowania\\C\\Kolokwium_2\\Dane\\dane.dat", "rb");
    double liczba;
    double srednia = 0;
    double suma = 0;
    int liczba_elementow = 0;
    while (fread(&liczba, sizeof(double), 1, plik) == 1)
    {
        suma += liczba;
        liczba_elementow++;
    }
    fclose(plik);
    srednia = suma / liczba_elementow;
    printf("Średnia to %.2f\n", srednia);
}

void podpunkt_b()
{
    {
        FILE *plik_wejsciowy = fopen("E:\\C-C-Workspace\\Kolokwia podstawy programowania\\C\\Kolokwium_2\\Dane\\dane.txt", "r");
        if (plik_wejsciowy == NULL)
        {
            printf("Nie mozna otworzyc pliku dane.txt.\n");
            exit(EXIT_FAILURE);
        }

        FILE *plik_wyjsciowy = fopen("E:\\C-C-Workspace\\Kolokwia podstawy programowania\\C\\Kolokwium_2\\Wyniki\\wynik.dat", "w");
        if (plik_wyjsciowy == NULL)
        {
            printf("Nie mozna otworzyc pliku wyniki.dat.\n");
            fclose(plik_wejsciowy);
            exit(EXIT_FAILURE);
        }

        double liczba;
        while (fscanf(plik_wejsciowy, "%lf", &liczba) == 1)
        {
            if (liczba >= 0)
            {
                fprintf(plik_wyjsciowy, "%.2lf\n", liczba);
            }
        }

        fclose(plik_wejsciowy);
        fclose(plik_wyjsciowy);
    }
}

void podpunkt_c()
{
    FILE *plik = fopen("E:\\C-C-Workspace\\Kolokwia podstawy programowania\\C\\Kolokwium_2\\Dane\\liczby.bin", "rb+");
    if (plik == NULL)
    {
        printf("Nie mozna otworzyc pliku liczby.bin.\n");
        exit(EXIT_FAILURE);
    }

    // Pobierz rozmiar pliku
    fseek(plik, 0, SEEK_END);
    long rozmiar_pliku = ftell(plik);
    rewind(plik);

    // Sprawdź, czy plik jest pusty
    if (rozmiar_pliku == 0)
    {
        fclose(plik);
        return;
    }

    // Oblicz liczbę liczb w pliku
    int liczba_liczb = rozmiar_pliku / sizeof(int);

    // Odwróć kolejność liczb
    int *liczby = (int *)malloc(liczba_liczb * sizeof(int));
    if (liczby == NULL)
    {
        printf("Nie mozna zaalokowac pamieci.\n");
        fclose(plik);
        exit(EXIT_FAILURE);
    }

    // Wczytaj liczby z pliku
    fread(liczby, sizeof(int), liczba_liczb, plik);

    // Odwróć kolejność liczb
    rewind(plik);
    for (int i = liczba_liczb - 1; i >= 0; i--)
    {
        fwrite(&liczby[i], sizeof(int), 1, plik);
    }

    free(liczby);
    fclose(plik);
}

void podpunkt_d()
{
    FILE *plik = fopen("E:\\C-C-Workspace\\Kolokwia podstawy programowania\\C\\Kolokwium_2\\Dane\\liczby.txt", "r");
    if (plik == NULL)
    {
        printf("Nie udało się otworzyć pliku liczby.txt");
        exit(EXIT_FAILURE);
    }
    double liczba;
    FILE *temp = fopen("E:\\C-C-Workspace\\Kolokwia podstawy programowania\\C\\Kolokwium_2\\Dane\\temp.txt", "w");
    if (temp == NULL)
    {
        printf("Nie udało się otworzyć pliku liczby.txt");
        exit(EXIT_FAILURE);
    }
    while (fscanf(plik, "%lf", &liczba) == 1)
    {
        // Zamiana znaku liczby
        fprintf(temp, "%.2f\n", -liczba);
    }
    fclose(plik);
    fclose(temp);
    remove("E:\\C-C-Workspace\\Kolokwia podstawy programowania\\C\\Kolokwium_2\\Dane\\liczby.txt");
    rename("E:\\C-C-Workspace\\Kolokwia podstawy programowania\\C\\Kolokwium_2\\Dane\\temp.txt", "E:\\C-C-Workspace\\Kolokwia podstawy programowania\\C\\Kolokwium_2\\Dane\\liczby.txt");
}

void podpunkt_e()
{
    FILE *plik = fopen("E:\\C-C-Workspace\\Kolokwia podstawy programowania\\C\\Kolokwium_2\\Dane\\dane.dat", "rb");
    int liczba;
    int max_liczba = 0;
    int aktualny_indeks = 0;
    int indeks_max = -1;
    if (plik == NULL)
    {
        printf("Nie można otworzyć pliku dane.dat\n");
        exit(EXIT_FAILURE);
    }
    while (fscanf(plik, "%d", &liczba) == 1)
    {
        if (liczba > max_liczba)
        {
            max_liczba = liczba;
            indeks_max = aktualny_indeks;
        }
        aktualny_indeks++;
    }
    printf("Pozycja liczby o maksymalnej wartości to %d\n.", indeks_max);
    fclose(plik);
}

void podpunkt_f()
{
    FILE *plik = fopen("E:\\C-C-Workspace\\Kolokwia podstawy programowania\\C\\Kolokwium_2\\Dane\\liczby.bin", "rb+");
    if (plik == NULL)
    {
        printf("Nie można otworzyć pliku liczby.bin.\n");
        exit(EXIT_FAILURE);
    }
    long double liczba;
    int wynik = 1;
    long double nowa_liczba;
    int n = 2;
    long double x = 5.31;
    if (fseek(plik, n * sizeof(long double), SEEK_SET) != 0)
    {
        printf("Błąd przemieszczenia wskaźnika pliku!\n");
        fclose(plik);
        wynik = 0;
    }
    if (fread(&liczba, sizeof(long double), 1, plik) != 1)
    {
        printf("Błąd odczytu liczby!\n");
        fclose(plik);
        wynik = 0;
    }

    nowa_liczba = liczba + x;

    if (fseek(plik, n * sizeof(long double), SEEK_SET) != 0)
    {
        printf("Błąd przemieszczenia wskaźnika pliku!\n");
        fclose(plik);
        wynik = 0;
    }

    if (fwrite(&nowa_liczba, sizeof(long double), 1, plik) != 1)
    {
        printf("Błąd zapisu liczby!\n");
        fclose(plik);
        wynik = 0;
    }

    fclose(plik);

    if (wynik)
    {
        printf("Liczba została pomyślnie zmodyfikowana.\n");
    }
    else
    {
        printf("Wystąpił błąd podczas modyfikacji.\n");
    }

    printf("Zawartość pliku liczby.bin:\n");
}

void podpunkt_g()
{
    FILE *plik = fopen("E:\\C-C-Workspace\\Kolokwia podstawy programowania\\C\\Kolokwium_2\\Dane\\dane.dat", "rb");
    if (plik == NULL)
    {
        printf("Nie można otworzyć pliku dane.dat\n");
        exit(EXIT_FAILURE);
    }
    int poprzedni_znak = -1;
    int aktualny_znak;
    struct wyniki wynik = {0};

    while ((aktualny_znak = fgetc(plik)) != EOF)
    {
        if (poprzedni_znak != -1 && poprzedni_znak == aktualny_znak)
        {
            wynik.powtorzenia++;
        }
        poprzedni_znak = aktualny_znak;
    }

    fclose(plik);
    printf("Liczba powtorzeń podwójnych znaków w pliku to %d\n", wynik.powtorzenia);
}

int main()
{
    setlocale(LC_ALL, "pl_PL.UTF-8");
    int wybor = 0;
    printf("----- MENU -----\n");
    printf("1. Podpunkt a\n2. Podpunkt b\n3. Podpunkt c\n4. Podpunkt d\n5. Podpunkt e\n6. Podpunkt f\n7. Podpunkt g\n");
    printf("Wybierz podpunkt: ");
    scanf("%d", &wybor);
    switch (wybor)
    {
    case 1:
        podpunkt_a();
        break;
    case 2:
        podpunkt_b();
        break;
    case 3:
        podpunkt_c();
        break;
    case 4:
        podpunkt_d();
        break;
    case 5:
        podpunkt_e();
        break;
    case 6:
        podpunkt_f();
        break;
    case 7:
        podpunkt_g();
        break;
    default:
        printf("Nie ma takiego podpunktu.\n");
        break;
    }
}