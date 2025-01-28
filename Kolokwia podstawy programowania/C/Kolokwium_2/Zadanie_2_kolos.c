#include <stdio.h>
#include <stdlib.h>

// Strukruty danych definujecie najlepiej przed funkcją i mainem
// Zadanie 2 f
typedef struct
{
    char marka[20];
    char numer_rejestracyjny[10];
    char typ_silnika[10];
    double przebieg;
    double cena;
} autokomis;
// Zadanie 2 g
typedef struct
{
    char tytul[50];
    char autor[50];
    int liczba_stron;
    char typ_okladki[20];
    double cena;
} biblioteka;

typedef struct
{
    int numer_pociagu;
    char miejscowosc[50];
    float godzina_odjazdu;
    float godzina_przyjazdu;
    double cena_biletu;
} rozklad_jazdy;

int czy_mercedes(char *napis) // Dodatkowa funkcja na sprawdzanie marki bo piasecki to chuj
{
    char mercedes[] = "Mercedes";
    int i = 0;

    // Porównuj kolejne znaki
    while (mercedes[i] != '\0')
    {
        if (napis[i] != mercedes[i])
            return 0; // Nie jest Mercedesem
        i++;
    }

    return 1; // Jest Mercedesem
}

autokomis *zadanie_2_f(autokomis *tab, int rozmiar)
{
    autokomis *najt_mercedes = NULL;
    float min_cena = tab[0].cena;

    for (int i = 0; i < rozmiar; i++)
    {
        if (czy_mercedes(tab[i].marka) && tab[i].cena < min_cena)
        {
            min_cena = tab[i].cena;
            najt_mercedes = &tab[i];
        }
    }
    return najt_mercedes;
}

int zadanie_2_g(biblioteka *tab, int rozmiar, char pierwsze_litery[])
{
    int ilosc_poprawnych = 0;
    int poprawna_ksiazka;
    for (int i = 0; i < rozmiar; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (tab[i].tytul[j] == pierwsze_litery[j])
            {
                ilosc_poprawnych++;
            }
        }
        if (ilosc_poprawnych == 3)
        {
            poprawna_ksiazka = i;
            break;
        }
    }
    return poprawna_ksiazka;
}

int zadanie_2_h(rozklad_jazdy *tab, int rozmiar)
{
    int max_cena = 0;
    int max_indeks_cena = 0;
    for (int i = 0; i < rozmiar; i++)
    {
        if (tab[i].cena_biletu > max_cena)
        {
            max_cena = tab[i].cena_biletu;
            max_indeks_cena = i;
        }
    }
    return max_indeks_cena;
}

int main()
{
    // Zadanie 1 f
    autokomis samochody[] = {
        {"Mercedes", "EZG 2678C", "Diesel", 15000.0, 150000.31},
        {"BMW", "WKR 1234B", "Benzyna", 20000.0, 120000.00},
        {"Mercedes", "GZT 5678A", "Diesel", 18000.0, 180000.50},
        {"Audi", "KLM 9012C", "Benzyna", 16000.0, 160000.25},
        {"Volkswagen", "PQR 3456B", "Diesel", 14000.0, 140000.00},
        {"Mercedes", "STU 7890A", "Benzyna", 17000.0, 170000.75},
        {"BMW", "VWX 2345C", "Diesel", 19000.0, 190000.50},
        {"Audi", "YZA 1234B", "Benzyna", 15000.0, 150000.00},
        {"Mercedes", "BCD 5678A", "Diesel", 16000.0, 160000.25},
        {"Volkswagen", "EFG 9012C", "Benzyna", 14000.0, 140000.00}};
    int rozmiar = sizeof(samochody) / sizeof(samochody[0]);

    autokomis *najtanszy = zadanie_2_f(samochody, rozmiar);

    if (najtanszy != NULL)
    {
        printf("Najtańszy Mercedes:\n");
        printf("Marka: %s\n", najtanszy->marka);
        printf("Numer rejestracyjny: %s\n", najtanszy->numer_rejestracyjny);
        printf("Typ silnika: %s\n", najtanszy->typ_silnika);
        printf("Przebieg: %lf\n", najtanszy->przebieg);
        printf("Cena: %.2lf\n", najtanszy->cena);
    }
    // Zadanie 2 g
    biblioteka ksiazki[] = {
        {"Władca Pierścieni", "J.R.R. Tolkien", 432, "Twarda", 49.99},
        {"Harry Potter i Kamień Filozoficzny", "J.K. Rowling", 320, "Miękka", 29.99},
        {"Dziecię Stalowej Góry", "Patrick Rothfuss", 576, "Twarda", 59.99},
        {"Gra o Tron", "George R.R. Martin", 864, "Twarda", 69.99},
        {"Czas pogardy", "Andrzej Sapkowski", 416, "Miękka", 39.99},
        {"Wiedźmin: Ostatnie życzenie", "Andrzej Sapkowski", 336, "Miękka", 29.99},
        {"Pan Lodowego Ogrodu", "Jorge Luis Borges", 272, "Twarda", 49.99},
        {"Księga Dżungli", "Rudyard Kipling", 320, "Miękka", 24.99},
        {"Wojna Światów", "H.G. Wells", 416, "Twarda", 39.99},
        {"Dzień Tryfidów", "John Wyndham", 336, "Miękka", 29.99}};

    rozmiar = sizeof(ksiazki) / sizeof(ksiazki[0]);
    char pierwsze_litery[] = "Har";
    int wynik = zadanie_2_g(ksiazki, rozmiar, pierwsze_litery);
    printf("Indeks pierwszej poprawnej ksiazki to: %d\n", wynik);
    // Zadanie 2 h
    rozklad_jazdy pociagi[] = {
        {1, "Warszawa", 6.30, 10.30, 59.99},
        {2, "Krakow", 8.00, 12.00, 59.99},
        {3, "Gdansk", 9.30, 13.30, 49.99},
        {4, "Poznan", 11.00, 15.00, 49.99},
        {5, "Warszawa", 12.30, 16.30, 69.99},
        {6, "Wroclaw", 14.00, 18.00, 69.99},
        {7, "Krakow", 15.30, 19.30, 79.99},
        {8, "Gdansk", 17.00, 21.00, 80.99},
        {9, "Poznan", 18.30, 22.30, 59.99},
        {10, "Wroclaw", 20.00, 0.00, 59.99}};
    rozmiar = sizeof(pociagi) / sizeof(pociagi[0]);
    int indeks = zadanie_2_h(pociagi, rozmiar);
    printf("Najdrozszy bilet jest do miejscowosci o nazwie: %s", pociagi[indeks].miejscowosc);
}