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
// Podpunkt e
struct sklep_RTV
{
    char nazwa_towaru[50];
    int ilosc_sztuk;
    float cena;
    float waga;
};
// Podpunkt f
struct stypendia
{
    char imie[25];
    char nazwisko[30];
    float stypendium;
    bool zaliczenie;
};
// Podpunkt g
struct dane_studentow
{
    char imie[15];
    char nazwisko[25];
    int wiek;
    bool zaliczenie;
};
// Podpunkt h
struct rozklad_jazdy
{
    char nazwa_miasta[30];
    unsigned int dlugosc_trasy;
    float godzina_odjazdu;
    char typ_pociagu;
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

void podpunkt_e()
{
    struct sklep_RTV towary[50];
    int ile_towarow = 0;
    // Towar 1
    int j = 0;
    char nazwa[] = "Telewizor";
    while (nazwa[j] != '\0')
    {
        towary[ile_towarow].nazwa_towaru[j] = nazwa[j];
        j++;
    }
    towary[ile_towarow].nazwa_towaru[j] = '\0';
    towary[ile_towarow].ilosc_sztuk = 4;
    towary[ile_towarow].cena = 1223.44;
    towary[ile_towarow].waga = 20.74;
    ile_towarow++;

    // Towar 2
    j = 0;
    char nazwa_2[] = "Pralka";
    while (nazwa_2[j] != '\0')
    {
        towary[ile_towarow].nazwa_towaru[j] = nazwa_2[j];
        j++;
    }
    towary[ile_towarow].nazwa_towaru[j] = '\0';
    towary[ile_towarow].ilosc_sztuk = 5;
    towary[ile_towarow].cena = 3000.84;
    towary[ile_towarow].waga = 30.85;
    ile_towarow++;

    // Program wyszykujący najtańsze produkty

    int najtanszy = 0;
    for (int i = 0; i < ile_towarow; i++)
    {
        if (towary[i].cena < towary[najtanszy].cena)
        {
            najtanszy = i;
        }
    }
    printf("Najtanszy produkt to:\n");
    printf("Nazwa: %s\n", towary[najtanszy].nazwa_towaru);
    printf("Ilosc: %d\n", towary[najtanszy].ilosc_sztuk);
    printf("Cena: %.2f\n", towary[najtanszy].cena);
    printf("Waga: %.2f\n", towary[najtanszy].waga);
}

void podpunkt_f()
{
    struct stypendia studenci[100];
    int ilosc_studentow = 0;
    // Student 1
    int j = 0;
    char imie[] = "Adam";
    while (imie[j] != '\0')
    {
        studenci[ilosc_studentow].imie[j] = imie[j];
        j++;
    }
    studenci[ilosc_studentow].imie[j] = '\0';

    j = 0;
    char nazwisko[] = "Bazan";
    while (nazwisko[j] != '\0')
    {
        studenci[ilosc_studentow].nazwisko[j] = nazwisko[j];
        j++;
    }
    studenci[ilosc_studentow].nazwisko[j] = '\0';
    studenci[ilosc_studentow].stypendium = 3200.50;
    studenci[ilosc_studentow].zaliczenie = true;
    ilosc_studentow++;

    // Student 2
    j = 0;
    char imie_1[] = "Jakub";
    while (imie_1[j] != '\0')
    {
        studenci[ilosc_studentow].imie[j] = imie_1[j];
        j++;
    }
    studenci[ilosc_studentow].imie[j] = '\0';

    j = 0;
    char nazwisko_1[] = "Piasecki";
    while (nazwisko_1[j] != '\0')
    {
        studenci[ilosc_studentow].nazwisko[j] = nazwisko_1[j];
        j++;
    }
    studenci[ilosc_studentow].nazwisko[j] = '\0';
    studenci[ilosc_studentow].stypendium = 2500.45;
    studenci[ilosc_studentow].zaliczenie = false;
    ilosc_studentow++;

    // Student 3
    j = 0;
    char imie_2[] = "Tomasz";
    while (imie_2[j] != '\0')
    {
        studenci[ilosc_studentow].imie[j] = imie_2[j];
        j++;
    }
    studenci[ilosc_studentow].imie[j] = '\0';

    j = 0;
    char nazwisko_2[] = "Dzialowy";
    while (nazwisko_2[j] != '\0')
    {
        studenci[ilosc_studentow].nazwisko[j] = nazwisko_2[j];
        j++;
    }
    studenci[ilosc_studentow].nazwisko[j] = '\0';
    studenci[ilosc_studentow].stypendium = 2300.46;
    studenci[ilosc_studentow].zaliczenie = true;
    ilosc_studentow++;

    // Program znajdujący studenta z zaliczonym semesterm i najniższym stypdenium
    int najmniejszy = 0;
    for (int i = 0; i < ilosc_studentow; i++)
    {
        if (studenci[i].stypendium < studenci[najmniejszy].stypendium && studenci[i].zaliczenie)
        {
            najmniejszy = i;
        }
    }
    printf("Student z zaliczonym semesterm i najmniejszym stypendium:\n");
    printf("Imie: %s\n", studenci[najmniejszy].imie);
    printf("Nazwisko: %s\n", studenci[najmniejszy].nazwisko);
    printf("Stypendium: %.2f\n", studenci[najmniejszy].stypendium);
    printf("Czy zaliczył?: %d\n", studenci[najmniejszy].zaliczenie);
}

void podpunkt_g()
{
    struct dane_studentow student[50];
    int ilosc_studentow = 0;
    // Student 1
    int j = 0;
    char imie[] = "Adam";
    while (imie[j] != '\0')
    {
        student[ilosc_studentow].imie[j] = imie[j];
        j++;
    }
    student[ilosc_studentow].imie[j] = '\0';

    j = 0;
    char nazwisko[] = "Adamski";
    while (nazwisko[j] != 0)
    {
        student[ilosc_studentow].nazwisko[j] = nazwisko[j];
        j++;
    }
    student[ilosc_studentow].nazwisko[j] = '\0';
    student[ilosc_studentow].wiek = 20;
    student[ilosc_studentow].zaliczenie = true;
    ilosc_studentow++;

    // Student 2
    j = 0;
    char imie_1[] = "Jakub";
    while (imie_1[j] != '\0')
    {
        student[ilosc_studentow].imie[j] = imie_1[j];
        j++;
    }
    student[ilosc_studentow].imie[j] = '\0';

    j = 0;
    char nazwisko_1[] = "Huc";
    while (nazwisko[j] != 0)
    {
        student[ilosc_studentow].nazwisko[j] = nazwisko_1[j];
        j++;
    }
    student[ilosc_studentow].nazwisko[j] = '\0';
    student[ilosc_studentow].wiek = 19;
    student[ilosc_studentow].zaliczenie = false;
    ilosc_studentow++;

    // Program sprawdzający czy imie i nazwisko studenta zaczynaja się na tę samą literę
    printf("Dane studentow, których imie i nazwisko zaczyna się na tę samą literę:\n");
    for (int i = 0; i < ilosc_studentow; i++)
    {
        if (student[i].imie[0] == student[i].nazwisko[0])
        {
            printf("Imię: %s\n", student[i].imie);
            printf("Nazwisko: %s\n", student[i].nazwisko);
        }
    }
}

void podpunkt_h()
{
    struct rozklad_jazdy pociagi[50];
    int ilosc_pociagow = 0;
    // Pociag 1
    int j = 0;
    char miasto[] = "Wrocław";
    while (miasto[j] != '\0')
    {
        pociagi[ilosc_pociagow].nazwa_miasta[j] = miasto[j];
        j++;
    }
    pociagi[ilosc_pociagow].nazwa_miasta[j] = '\0';
    pociagi[ilosc_pociagow].dlugosc_trasy = 1250;
    pociagi[ilosc_pociagow].godzina_odjazdu = 12.50;
    pociagi[ilosc_pociagow].typ_pociagu = 'o';
    ilosc_pociagow++;
    // Pociag 2
    j = 0;
    char miasto_1[] = "Wrocław";
    while (miasto_1[j] != '\0')
    {
        pociagi[ilosc_pociagow].nazwa_miasta[j] = miasto_1[j];
        j++;
    }
    pociagi[ilosc_pociagow].nazwa_miasta[j] = '\0';
    pociagi[ilosc_pociagow].dlugosc_trasy = 500;
    pociagi[ilosc_pociagow].godzina_odjazdu = 14.58;
    pociagi[ilosc_pociagow].typ_pociagu = 'o';
    ilosc_pociagow++;
    // Program obliczający średnią trasę pociągów osobowych do danego miasta
    float srednia_dlugosc = 0;
    for (int i = 0; i < ilosc_pociagow; i++)
    {
        if (pociagi[i].typ_pociagu == 'o')
            srednia_dlugosc += pociagi[i].dlugosc_trasy;
    }
    srednia_dlugosc /= ilosc_pociagow;
    printf("Średnia długość trasy pociągów osobowych do miasta %s to %f\n", miasto, srednia_dlugosc);
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
    case 5:
        podpunkt_e();
        break;
    case 6:
        podpunkt_f();
        break;
    case 7:
        podpunkt_g();
        break;
    case 8:
        podpunkt_h();
        break;
    default:
        printf("Nie ma takiego podpunktu.");
        break;
    }
}
