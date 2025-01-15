#include <stdio.h>
#include <stdlib.h>

void podpunkt_a(char lancuch[])
{
    for (int i = 0; lancuch[i] != '\0'; i++)
    {
        if (lancuch[i] >= 'a' && lancuch[i] <= 'z')
        {
            for (int j = i; lancuch[j] != '\0'; j++)
            {
                lancuch[j] = lancuch[j + 1];
            }
            break;
        }
    }
    printf("Nowy lancuch: %s\n", lancuch);
}

void podpunkt_b(char lancuch[])
{
    int i;
    for (i = 0; lancuch[i] == ' '; i++)
        ;

    if (i > 0)
    {
        int j;
        for (j = 0; lancuch[i] != '\0'; j++, i++)
        {
            lancuch[j] = lancuch[i];
        }
        lancuch[j] = '\0';
    }
    printf("Nowy lancuch: %s\n", lancuch);
}

void podpunkt_c(char lancuch[])
{
    int i;
    for (i = 0; lancuch[i] == ' '; i++)
        ;

    if (i > 0)
    {
        int j;
        for (j = 0; lancuch[i] != ' '; j++, i++)
        {
            lancuch[j] = lancuch[i];
        }
        lancuch[j] = '\0';
    }
    printf("Nowy lancuch: %s\n", lancuch);
}

void podpunkt_d(char lancuch[])
{
    int j = 0;
    for (int i = 0; lancuch[i] != '\0'; i++)
    {
        if (lancuch[i] != ' ')
        {
            lancuch[j] = lancuch[i];
            j++;
        }
    }
    printf("Nowy lancuch: %s\n", lancuch);
}
void podpunkt_e(char lancuch[])
{
    int j = 0;
    for (int i = 0; lancuch[i] != '\0'; i++)
    {
        if (lancuch[i] != lancuch[i - 1])
        {
            lancuch[j] = lancuch[i];
            j++;
        }
    }
    lancuch[j] = '\0';
    printf("Nowy lancuch: %s\n", lancuch);
}

void podpunkt_f(char lancuch[])
{
    int ilosc_spacji = 0;
    printf("Podaj ilosc spacji: ");
    scanf("%d", &ilosc_spacji);
    int dlugosc = 0;
    while (lancuch[dlugosc] != '\0')
    {
        dlugosc++;
    }
    for (int i = dlugosc; i >= 0; i--) // Cofamy się od ostatniego miejsca w liście po przesunięciu o ilość spacji
    {
        lancuch[i + ilosc_spacji] = lancuch[i]; // Przesunięcie o ilość spacji do przodu całego łańcucha
    }
    for (int i = 0; i < ilosc_spacji; i++)
    {
        lancuch[i] = ' ';
    }

    lancuch[dlugosc + ilosc_spacji] = '\0';

    printf("Nowy lancuch: %s\n", lancuch);
}

void podpunkt_g(char lancuch[])
{
    int pocz, kon, dlugosc;
    int j = 0;
    printf("Podaj początek: ");
    scanf("%d", &pocz);
    printf("Podaj koniec: ");
    scanf("%d", &kon);

    while (lancuch[dlugosc] != '\0')
    {
        dlugosc++;
    }

    for (int i = 0; i < dlugosc; i++)
    {
        if (i < pocz || i > kon) // Zakres poza początkiem i końcem
        {
            lancuch[j] = lancuch[i]; // Zostawiamy litery w łańcuchu, które nie są w zakresie
            j++;
        }
    }
    lancuch[j] = '\0';
    printf("Nowy lancuch: %s\n", lancuch);
}

void podpunkt_h(char lancuch[])
{
    int dlugosc_lancucha = 0;
    printf("Podaj oczekiwana dlugosc lancucha: ");
    scanf("%d", &dlugosc_lancucha);
    int dlugosc = 0;
    while (lancuch[dlugosc] != '\0')
    {
        dlugosc++;
    }
    if (dlugosc_lancucha > dlugosc)
    {
       dlugosc_lancucha = dlugosc_lancucha - dlugosc;
    }
    else
    {
        printf("Dlugosc lancucha jest dluższa niż oczekiwana.\n");
        exit(0);
    }
    for (int i = dlugosc; i < dlugosc + dlugosc_lancucha; i++)
    {
        lancuch[i] = ' ';
    }

    lancuch[dlugosc + dlugosc_lancucha] = '\0';

    printf("Nowy lancuch: %s\n", lancuch);
}

void podpunkt_i(char lancuch[]) {
    int dlugosc = 0;
    while (lancuch[dlugosc] != '\0') 
    {
        dlugosc++;
    }

    bool symetryczny = true;
    for (int i = 0; i < dlugosc / 2; i++) 
    {
        if (lancuch[i] != lancuch[dlugosc - i - 1]) // Porównujemy na bierząco znaki pierwsze i ostatnie z łańcucha znaków
        {
            symetryczny = false;
            break;
        }
    }

    if (symetryczny) 
    {
        printf("Lancuch jest symetryczny");
    } else 
    {
        printf("Lancuch nie jest symetryczny");
    }
}

int main()
{
    char lancuch[] = " ";
    printf("Podaj lancuch znakow: ");
    scanf("%[^\n]", lancuch);
    printf("----- MENU ----- \n");
    printf("1. Podpunkt a\n2. Podpunkt b\n3. Podpunkt c\n4. Podpunkt d\n5. Podpunkt e\n6. Podpunkt f\n7. Podpunkt g\n8. Podpunkt h\n9. Podpunkt i\n");
    int wybor;
    printf("Podaj jaki podpunkt chcesz wybrac: ");
    scanf("%d", &wybor);
    switch (wybor)
    {
    case 1:
        podpunkt_a(lancuch);
        break;
    case 2:
        podpunkt_b(lancuch);
        break;
    case 3:
        podpunkt_c(lancuch);
        break;
    case 4:
        podpunkt_d(lancuch);
        break;
    case 5:
        podpunkt_e(lancuch);
        break;
    case 6:
        podpunkt_f(lancuch);
        break;
    case 7:
        podpunkt_g(lancuch);
        break;
    case 8:
        podpunkt_h(lancuch);
        break;
    case 9:
        podpunkt_i(lancuch);
        break;
    default:
        printf("Nie ma takiego podpunktu\n");
        break;
    }
}
