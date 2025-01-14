#include <stdio.h>
#include <math.h>

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

// Ciała funkcji
void menu()
{
   int podpunkt;
    printf("Menu:\n");
    printf("1. Podpunkt a\n");
    printf("2. Podpunkt b\n");
    printf("3. Podpunkt c\n");
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
    default:
        printf("Nieprawidlowy podpunkt\n");
        break;
    }
}

void podpunkt_a()
{
    int tablica[50];
    int i;
    int temp;    
    // Wypełnienie tablicy przykładowymi danymi
    printf("Wprowadz 50 liczb calkowitych:\n");
    for(i = 0; i < 50; i++) {
        scanf("%d", &tablica[i]);
    }
    
    // Wyświetlenie tablicy przed przesunięciem
    printf("\nTablica przed przesunieciem:\n");
    for(i = 0; i < 50; i++) {
        printf("%d ", tablica[i]);
    }
    
    // Przesunięcie elementów o jedną pozycję
    temp = tablica[49]; // Zapisanie ostatniego elementu
    for(i = 49; i > 0; i--) {
        tablica[i] = tablica[i-1];
    }
    tablica[0] = temp; // Wstawienie ostatniego elementu na pierwszą pozycję
    
    // Wyświetlenie tablicy po przesunięciu
    printf("\nTablica po przesunieciu:\n");
    for(i = 0; i < 50; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");
}
void podpunkt_b()
{
    float tablica[50];
    int i, n;
    int jest_symetryczna = 1; // 1 oznacza prawdę, 0 fałsz
    
    printf("Podaj rozmiar tablicy (max 50): ");
    scanf("%d", &n);
    
    printf("Wprowadz %d liczb rzeczywistych:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &tablica[i]);
    }
    
    // Sprawdzanie symetrii
    for(i = 0; i < n/2; i++) {
        if(tablica[i] != tablica[n-1-i]) {
            jest_symetryczna = 0;
            break;
        }
    }
    
    // Wyświetlenie wyniku
    if(jest_symetryczna) {
        printf("Tablica jest symetryczna\n");
    } else {
        printf("Tablica nie jest symetryczna\n");
    }
}
void podpunkt_c()
{
    int tablica[100];
    int i;
    int min_dodatnia = 2147483647; // Inicjalizacja maksymalną wartością typu int
    
    printf("Wprowadz 100 liczb calkowitych:\n");
    for(i = 0; i < 100; i++) {
        scanf("%d", &tablica[i]);
    }
    
    // Szukanie minimalnej wartości dodatniej
    for(i = 0; i < 100; i++) {
        if(tablica[i] > 0 && tablica[i] < min_dodatnia) {
            min_dodatnia = tablica[i];
        }
    }
    
    if(min_dodatnia == 2147483647) {
        printf("Brak dodatnich elementow w tablicy\n");
    } else {
        printf("Minimalna wartosc dodatnia: %d\n", min_dodatnia);
    }
}

