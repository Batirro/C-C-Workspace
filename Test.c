#include <stdio.h>

void remove_spaces(char *str)
{
    int j = 0; // Indeks do zapisywania znaków bez spacji

    // Przechodzimy przez cały ciąg znaków za pomocą pętli for
    for (int i = 0; str[i] != '\0'; i++)
    {
        // Jeśli znak nie jest spacją, kopiujemy go do nowej pozycji
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }

    // Zakończ ciąg znakiem null
    str[j] = '\0';
}

int main()
{
    char text[] = "To jest przykładowy tekst z spacjami.";

    printf("Przed usunięciem spacji: %s\n", text);

    remove_spaces(text);

    printf("Po usunięciu spacji: %s\n", text);

    return 0;
}