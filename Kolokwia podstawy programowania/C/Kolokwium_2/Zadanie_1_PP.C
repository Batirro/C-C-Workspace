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
    for (int i = 0; lancuch[i] != '\0'; i++)
    {
        for (int j = 0; j >= ilosc_spacji; j++)
        {
                }
    }
}

int main()
{
    char lancuch[] = " ";
    printf("Podaj lancuch znakow: ");
    scanf("%[^\n]", lancuch);
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
    default:
        printf("Nie ma takiego podpunktu\n");
        break;
    }
}
