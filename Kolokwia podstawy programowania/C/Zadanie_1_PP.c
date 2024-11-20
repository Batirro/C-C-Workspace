#include <stdio.h>

void podpunkt_a();
void podpunkt_b();

int main()
{
    podpunkt_a();
    podpunkt_b();
}

void podpunkt_a()
{
    int liczby[4];
    int i, j;
    int dwojki = 0, trojki = 0, czworki = 0;
    
    for(i = 0; i < 4; i++) {
        printf("Liczba %d: ", i+1);
        scanf("%d", &liczby[i]);
    }
    
    for(i = 0; i < 4; i++) {
        int licznik = 1;
        for(j = 0; j < 4; j++) {
            if(i != j && liczby[i] == liczby[j]) {
                licznik++;
            }
        }
        
        if(licznik == 2) dwojki++;
        else if(licznik == 3) trojki++;
        else if(licznik == 4) czworki++;
    }
    
    printf("Liczba par: %d\n", dwojki/2);
    printf("Liczba trojek: %d\n", trojki/3);
    printf("Liczba czworek: %d\n", czworki/4);
}
void podpunkt_b()
{
    char znak;
    int licznik_t = 0, licznik_a = 0, licznik_o = 0;
    int znaleziono = 0;
    
    printf("Wpisuj znaki, az utworza slowo 'tato':\n");
    
    while (!znaleziono) {
        scanf(" %c", &znak);
        
        if (znak == 't') licznik_t++;
        else if (znak == 'a') licznik_a++;
        else if (znak == 'o') licznik_o++;
        
        if (licznik_t >= 2 && licznik_a >= 1 && licznik_o >= 1) {
            znaleziono = 1;
        }
    }
    
    printf("Zebrano wystarczajaco znakow do utworzenia slowa 'tato'!\n");
}