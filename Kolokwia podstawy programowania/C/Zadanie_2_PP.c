#include <stdio.h>
#include <math.h>
#include <ctype.h>
// Prototypy funkcji
void menu();
void podpunkt_a();
void podpunkt_b();
void podpunkt_c();
void podpunkt_d();
void podpunkt_e();
void podpunkt_f();
void podpunkt_g();
void podpunkt_h();
void podpunkt_i();

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
    printf("6. Podpunkt f\n");
    printf("7. Podpunkt g\n");
    printf("8. Podpunkt h\n");
    printf("9. Podpunkt i\n");
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
        printf("Nieprawidlowy podpunkt!\n");
        break;
    }
}
void podpunkt_a()
{
    int n, count = 0, num = 1;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    while (count < n) {
        if (num % 2 != 0 && num % 7 == 0) {
            printf("%d\n", num);
            count++;
        }
        num += 2;
    }
}
void podpunkt_b()
{
    int a, b, x, y, count = 0;
    printf("Podaj dolna granice przedzialu a: ");
    scanf("%d", &a);
    printf("Podaj gorna granice przedzialu b: ");
    scanf("%d", &b);

    for(x = a; x <= b; x++) {
        for(y = a; y <= b; y++) {
            if(x*x + y*y <= 50) {
                count++;
            }
        }
    }
    printf("Liczba par spelniajacych warunek x^2 + y^2 <= 50: %d\n", count);
}
void podpunkt_c()
{
    char znak, poprzedni1 = '\0', poprzedni2 = '\0';
    int licznik_liter = 0, licznik_cyfr = 0;
    int znaleziono = 0;
    
    printf("Wprowadzaj znaki (program zakonczy sie po trzech takich samych znakach):\n");
    
    while (!znaleziono) {
        znak = getchar();
        if (znak != '\n') {
            if (isalpha(znak)) {
                licznik_liter++;
            } else if (isdigit(znak)) {
                licznik_cyfr++;
            }
            
            if (znak == poprzedni1 && znak == poprzedni2) {
                znaleziono = 1;
            }
            
            poprzedni2 = poprzedni1;
            poprzedni1 = znak;
        }
    }
    
    printf("\nPodsumowanie:\n");
    printf("Liczba liter: %d\n", licznik_liter);
    printf("Liczba cyfr: %d\n", licznik_cyfr);
    
    if (licznik_liter > licznik_cyfr) {
        printf("Wiecej bylo liter.\n");
    } else if (licznik_cyfr > licznik_liter) {
        printf("Wiecej bylo cyfr.\n");
    } else {
        printf("Liczba liter i cyfr byla taka sama.\n");
    }
}