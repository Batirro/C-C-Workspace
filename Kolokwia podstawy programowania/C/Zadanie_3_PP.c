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
    printf("4. Podpunkt d\n");
    printf("5. Podpunkt e\n");
    printf("Wybierz podpunkt: ");
    scanf("%d", &podpunkt);
    switch (podpunkt)
    {
    case 1:
        podpunkt_a();
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