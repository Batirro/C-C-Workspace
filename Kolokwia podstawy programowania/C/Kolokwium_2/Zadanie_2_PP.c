#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

// Struktury danych
// Podpunkt a
struct Biblioteka
{
    char tytul[100];
    char autor[100];
    int indeks;
    float cena;
};
// Podpunkt b
struct Biblioteka_b
{
    char tytul[50];
    char autor[30];
    int liczba_stron;
    bool wypozyczona;
};
// Podpunkt c
struct auto_komis
{
    char marka[50];
    int przebieg;
    char kolor[10];
    float cena;
};
// Podpunkt d
struct firma
{
    char nazwisko[21];
    char imie[16];
    float pensja;
    char plec;
};

void podpunkt_a()
{
    int ile_ksiazek = 0;
    struct Biblioteka ksiazki[100];
    // 1. Książka
    int j = 0;
    char tytul1[] = "Pan Tadeusz";
    while (tytul1[j] != '\0')
    {
        ksiazki[ile_ksiazek].tytul[j] = tytul1[j];
        j++;
    }
    ksiazki[ile_ksiazek].tytul[j] = '\0';

    j = 0;
    char autor1[] = "Adam Mickiewicz";
    while (autor1[j] != '\0')
    {
        ksiazki[ile_ksiazek].autor[j] = autor1[j];
        j++;
    }
    ksiazki[ile_ksiazek].autor[j] = '\0';

    ksiazki[ile_ksiazek].indeks = 12345;
    ksiazki[ile_ksiazek].cena = 15.99;
    ile_ksiazek++;

    // 2. Książka
    j = 0;
    char tytul2[] = "Lalka";
    while (tytul2[j] != '\0')
    {
        ksiazki[ile_ksiazek].tytul[j] = tytul2[j];
        j++;
    }
    ksiazki[ile_ksiazek].tytul[j] = '\0';

    j = 0;
    char autor2[] = "Bolesław Prus";
    while (autor2[j] != '\0')
    {
        ksiazki[ile_ksiazek].autor[j] = autor2[j];
        j++;
    }
    ksiazki[ile_ksiazek].autor[j] = '\0';

    ksiazki[ile_ksiazek].indeks = 67890;
    ksiazki[ile_ksiazek].cena = 9.99;
    ile_ksiazek++;
    printf("Tanie książki (cena < 10 z?): \n");
    for (int i = 0; i < ile_ksiazek; i++)
    {
        if (ksiazki[i].cena < 10)
        {
            printf("Tytuł: %s\n", ksiazki[i].tytul);
            printf("Autor: %s\n", ksiazki[i].autor);
            printf("Indeks: %d\n", ksiazki[i].indeks);
            printf("Cena: %.2f zł\n\n", ksiazki[i].cena);
        }
    }
}

void podpunkt_b()
{
    struct Biblioteka_b lektury[200];
    int ile_ksiazek = 0;

    int j = 0;
    char tytul1[] = "Pan Tadeusz";
    while (tytul1[j] != '\0')
    {
        lektury[ile_ksiazek].tytul[j] = tytul1[j];
        j++;
    }
    lektury[ile_ksiazek].tytul[j] = '\0';

    j = 0;
    char autor1[] = "Adam Mickiewicz";
    while (autor1[j] != '\0')
    {
        lektury[ile_ksiazek].autor[j] = autor1[j];
        j++;
    }
    lektury[ile_ksiazek].autor[j] = '\0';

    lektury[ile_ksiazek].liczba_stron = 120;
    lektury[ile_ksiazek].wypozyczona = true;
    ile_ksiazek++;

    // 2. Książka
    j = 0;
    char tytul2[] = "Lalka";
    while (tytul2[j] != '\0')
    {
        lektury[ile_ksiazek].tytul[j] = tytul2[j];
        j++;
    }
    lektury[ile_ksiazek].tytul[j] = '\0';

    j = 0;
    char autor2[] = "Bolesław Prus";
    while (autor2[j] != '\0')
    {
        lektury[ile_ksiazek].autor[j] = autor2[j];
        j++;
    }
    lektury[ile_ksiazek].autor[j] = '\0';

    lektury[ile_ksiazek].liczba_stron = 150;
    lektury[ile_ksiazek].wypozyczona = false;
    ile_ksiazek++;

    printf("Książki niewypozyczone z ilością stron większą niż 100: \n");
    for (int i = 0; i < ile_ksiazek; i++)
    {
        if (lektury[i].wypozyczona == false && lektury[i].liczba_stron > 100)
        {
            printf("Tytuł: %s\n", lektury[i].tytul);
            printf("Autor: %s\n", lektury[i].autor);
            printf("Liczba stron: %d\n", lektury[i].liczba_stron);
            printf("Status: %d\n", lektury[i].wypozyczona);
        }
    }
}

void podpunkt_c()
{
    int ile_aut = 0;
    int indeks_min = 0;
    struct auto_komis auta[100];

    // Auto 1
    int j = 0;
    char marka_1[] = "Ford";
    while (marka_1[j] != '\0')
    {
        auta[ile_aut].marka[j] = marka_1[j];
        j++;
    }
    auta[ile_aut].marka[j] = '\0';

    j = 0;
    char kolor_1[] = "Czerwony";
    while (kolor_1[j] != '\0')
    {
        auta[ile_aut].kolor[j] = kolor_1[j];
        j++;
    }
    auta[ile_aut].kolor[j] = '\0';

    auta[ile_aut].przebieg = 120000;
    auta[ile_aut].cena = 159.564;
    ile_aut++;
    // Auto 2
    j = 0;
    char marka_2[] = "Volkswagen";
    while (marka_2[j] != '\0')
    {
        auta[ile_aut].marka[j] = marka_2[j];
        j++;
    }
    auta[ile_aut].marka[j] = '\0';

    j = 0;
    char kolor_2[] = "Czarny";
    while (kolor_2[j] != '\0')
    {
        auta[ile_aut].kolor[j] = kolor_2[j];
        j++;
    }
    auta[ile_aut].kolor[j] = '\0';

    auta[ile_aut].przebieg = 125;
    auta[ile_aut].cena = 499.999;
    ile_aut++;

    for (int i = 0; i < ile_aut; i++)
    {
        if (auta[i].przebieg < auta[indeks_min].przebieg)
        {
            indeks_min = i;
        }
    }
    printf("Auto z najmiejszym przebiegiem:\n");
    printf("Marka: %s\n", auta[indeks_min].marka);
    printf("Kolor: %s\n", auta[indeks_min].kolor);
    printf("Cena: %f\n", auta[indeks_min].cena);
    printf("Przebieg: %d\n", auta[indeks_min].przebieg);
}

void podpunkt_d()
{
    int liczba_pracownikow = 0, liczba_m = 0, liczba_k = 0;
    float srednia_pensja_mezczyzni = 0;
    float suma_pensji_mezczyzn = 0;
    float srednia_pensja_kobiety = 0;
    float suma_pensji_kobiet = 0;
    struct firma pracownicy[100];

    // Pracownik 1
    int j = 0;
    char imie[] = "Adam";
    while (imie[j] != '\0')
    {
        pracownicy[liczba_pracownikow].imie[j] = imie[j];
        j++;
    }
    pracownicy[liczba_pracownikow].imie[j] = '\0';

    j = 0;
    char nazwisko[] = "Kowalski";
    while (nazwisko[j] != '\0')
    {
        pracownicy[liczba_pracownikow].nazwisko[j] = nazwisko[j];
        j++;
    }
    pracownicy[liczba_pracownikow].nazwisko[j] = '\0';

    pracownicy[liczba_pracownikow].pensja = 1500.98;
    pracownicy[liczba_pracownikow].plec = 'm';
    liczba_pracownikow++;

    // Pracownik 2
    j = 0;
    char imie_1[] = "Robert";
    while (imie_1[j] != '\0')
    {
        pracownicy[liczba_pracownikow].imie[j] = imie_1[j];
        j++;
    }
    pracownicy[liczba_pracownikow].imie[j] = '\0';

    j = 0;
    char nazwisko_1[] = "Lewandowski";
    while (nazwisko_1[j] != '\0')
    {
        pracownicy[liczba_pracownikow].nazwisko[j] = nazwisko_1[j];
        j++;
    }
    pracownicy[liczba_pracownikow].nazwisko[j] = '\0';

    pracownicy[liczba_pracownikow].pensja = 6500.75;
    pracownicy[liczba_pracownikow].plec = 'm';
    liczba_pracownikow++;

    // Pracownik 3
    j = 0;
    char imie_2[] = "Krzysztof";
    while (imie_2[j] != '\0')
    {
        pracownicy[liczba_pracownikow].imie[j] = imie_2[j];
        j++;
    }
    pracownicy[liczba_pracownikow].imie[j] = '\0';

    j = 0;
    char nazwisko_2[] = "Mazur";
    while (nazwisko_2[j] != '\0')
    {
        pracownicy[liczba_pracownikow].nazwisko[j] = nazwisko_2[j];
        j++;
    }
    pracownicy[liczba_pracownikow].nazwisko[j] = '\0';

    pracownicy[liczba_pracownikow].pensja = 5250.50;
    pracownicy[liczba_pracownikow].plec = 'm';
    liczba_pracownikow++;

    // Pracownik 4
    j = 0;
    char imie_3[] = "Ala";
    while (imie_3[j] != '\0')
    {
        pracownicy[liczba_pracownikow].imie[j] = imie_3[j];
        j++;
    }
    pracownicy[liczba_pracownikow].imie[j] = '\0';

    j = 0;
    char nazwisko_3[] = "Dobnicka";
    while (nazwisko_3[j] != '\0')
    {
        pracownicy[liczba_pracownikow].nazwisko[j] = nazwisko_3[j];
        j++;
    }
    pracownicy[liczba_pracownikow].nazwisko[j] = '\0';

    pracownicy[liczba_pracownikow].pensja = 1500.98;
    pracownicy[liczba_pracownikow].plec = 'm';
    liczba_pracownikow++;

    // Pracownik 5
    j = 0;
    char imie_4[] = "Aleksandra";
    while (imie_4[j] != '\0')
    {
        pracownicy[liczba_pracownikow].imie[j] = imie_4[j];
        j++;
    }
    pracownicy[liczba_pracownikow].imie[j] = '\0';

    j = 0;
    char nazwisko_4[] = "Kamińska";
    while (nazwisko_4[j] != '\0')
    {
        pracownicy[liczba_pracownikow].nazwisko[j] = nazwisko_4[j];
        j++;
    }
    pracownicy[liczba_pracownikow].nazwisko[j] = '\0';

    pracownicy[liczba_pracownikow].pensja = 4950.25;
    pracownicy[liczba_pracownikow].plec = 'k';
    liczba_pracownikow++;

    // Pracownik 6
    j = 0;
    char imie_5[] = "Katarzyna";
    while (imie_5[j] != '\0')
    {
        pracownicy[liczba_pracownikow].imie[j] = imie_5[j];
        j++;
    }
    pracownicy[liczba_pracownikow].imie[j] = '\0';

    j = 0;
    char nazwisko_5[] = "Wojciechowska";
    while (nazwisko_5[j] != '\0')
    {
        pracownicy[liczba_pracownikow].nazwisko[j] = nazwisko_5[j];
        j++;
    }
    pracownicy[liczba_pracownikow].nazwisko[j] = '\0';

    pracownicy[liczba_pracownikow].pensja = 5100.00;
    pracownicy[liczba_pracownikow].plec = 'k';
    liczba_pracownikow++;
    for (int i = 0; i < liczba_pracownikow; i++)
    {
        if (pracownicy[i].plec == 'm')
        {
            suma_pensji_mezczyzn = +pracownicy[i].pensja;
            liczba_m++;
        }
        else
        {
            suma_pensji_kobiet = +pracownicy[i].pensja;
            liczba_k++;
        }
    }
    srednia_pensja_mezczyzni = suma_pensji_mezczyzn / liczba_m;
    srednia_pensja_kobiety = suma_pensji_kobiet / liczba_k;
    printf("Średnia pensja mężczyzn: %f zł\n", srednia_pensja_mezczyzni);
    printf("Średnia pensja kobiet: %f zł\n", srednia_pensja_kobiety);
    if (srednia_pensja_mezczyzni > srednia_pensja_kobiety)
    {
        printf("Średnia pensja mężczyzn jest większa\n");
    }
    else
    {
        printf("Średnia pensja kobiet jest większa\n");
    }
}

int main()
{
    setlocale(LC_ALL, "pl_PL.UTF-8");
    int wybor = 0;
    printf("----- MENU ----- \n");
    printf("1. Podpunkt a\n2. Podpunkt b\n3. Podpunkt c\n4. Podpunkt d\n5. Podpunkt e\n6. Podpunkt f\n7. Podpunkt g\n8. Podpunkt h\n");
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
    default:
        printf("Nie ma takiego podpunktu.");
        break;
    }
}
