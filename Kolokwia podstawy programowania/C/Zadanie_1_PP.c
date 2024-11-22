#include <stdio.h>

// Prototypy funkcji
void menu();
void podpunkt_a();
void podpunkt_b();
void podpunkt_c();
void podpunkt_d();
void podpunkt_e();

int main()
{
    menu(); // Wywołanie menu z wybranym podpunktem
}

//Ciała funkcji
void menu()
{
    int podpunkt;
    printf("Menu:\n");
    printf("1. Podpunkt a\n");
    printf("2. Podpunkt b\n");
    printf("3. Podpunkt c\n");
    printf("4. Podpunkt d\n");
    printf("5. Podpunkt e\n");
    printf("Wybierz podpunkt: ");
    scanf("%d", &podpunkt);
    switch (podpunkt)
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
    default:
        printf("Nieprawidlowy podpunkt!\n");
        break;
    }
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
void podpunkt_c()
{
    float liczby[4];
    int i, j;
    float temp;
    
    for(i = 0; i < 4; i++) {
        printf("Podaj liczbe %d: ", i+1);
        scanf("%f", &liczby[i]);
    }
    
    for(i = 0; i < 4-1; i++) {
        for(j = 0; j < 4-i-1; j++) {
            if(liczby[j] > liczby[j+1]) {
                temp = liczby[j];
                liczby[j] = liczby[j+1];
                liczby[j+1] = temp;
            }
        }
    }
    
    float srednia = (liczby[2] + liczby[3]) / 2;
    
    printf("Srednia z dwoch najwiekszych liczb: %.2f\n", srednia);
}
void podpunkt_d()
{
    float liczby[3];
    int i, j;
    float temp;
    
    for(i = 0; i < 3; i++) {
        printf("Podaj liczbe %d: ", i+1);
        scanf("%f", &liczby[i]);
    }
    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2-i; j++) {
            if(liczby[j] > liczby[j+1]) {
                temp = liczby[j];
                liczby[j] = liczby[j+1];
                liczby[j+1] = temp;
            }
        }
    }
    
    printf("Liczby w kolejnosci rosnacej:\n");
    for(i = 0; i < 3; i++) {
        printf("%.2f ", liczby[i]);
    }
    printf("\n");
}
void podpunkt_e()
{
    float liczby[4];
    int i, j;
    int licznik = 0;

    for(i = 0; i < 4; i++) {
        printf("Podaj liczbe %d: ", i+1);
        scanf("%f", &liczby[i]);
    }

    for(i = 0; i < 4; i++) {
        if(liczby[i] < 0) {
            licznik++;
        }
    }
    printf("Liczba ujemnych liczb: %d\n", licznik);
}