#include <stdio.h>
#include <math.h> // do funkcji sqrt
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
void podpunkt_j();
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
    printf("6. Podpunkt f\n");
    printf("7. Podpunkt g\n");
    printf("8. Podpunkt h\n");
    printf("9. Podpunkt i\n");
    printf("10. Podpunkt j\n");
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
    case 6:
        podpunkt_f();
        break;
    case 7:
        podpunkt_g();
        break;
    case 8:
        podpunkt_h();
        break;
    case 9:
        podpunkt_i();
        break;
    case 10:
        podpunkt_j();
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
    int i;
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
void podpunkt_f()
{
    float a, b, c;
    float delta, x1, x2;
    
    printf("Podaj wspolczynnik a: ");
    scanf("%f", &a);
    printf("Podaj wspolczynnik b: ");
    scanf("%f", &b);
    printf("Podaj wspolczynnik c: ");
    scanf("%f", &c);
    
    if(a == 0) {
        printf("To nie jest rownanie kwadratowe!\n");
        return;
    }
    
    delta = b*b - 4*a*c;
    
    if(delta > 0) {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("Rownanie ma dwa pierwiastki rzeczywiste:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    else if(delta == 0) {
        x1 = -b/(2*a);
        printf("Rownanie ma jeden pierwiastek podwojny:\n");
        printf("x = %.2f\n", x1);
    }
    else {
        printf("Rownanie nie ma pierwiastkow rzeczywistych\n");
    }
}
void podpunkt_g()
{
    int liczby[4];
    int i, j;
    int licznik_par = 0;
    
    for(i = 0; i < 4; i++) {
        printf("Podaj liczbe %d: ", i+1);
        scanf("%d", &liczby[i]);
    }
    
    for(i = 0; i < 3; i++) {
        for(j = i + 1; j < 4; j++) {
            if(liczby[i] == liczby[j]) {
                licznik_par++;
            }
        }
    }
    
    printf("Liczba par: %d\n", licznik_par);
}
void podpunkt_h()
{
    char znaki[4];
    int i;
    int ma_b = 0, ma_a = 0, ma_j = 0, ma_t = 0;
    
    printf("Podaj 4 znaki:\n");
    for(i = 0; i < 4; i++) {
        printf("Znak %d: ", i+1);
        scanf(" %c", &znaki[i]);
        
        if(znaki[i] == 'b') ma_b = 1;
        else if(znaki[i] == 'a') ma_a = 1;
        else if(znaki[i] == 'j') ma_j = 1;
        else if(znaki[i] == 't') ma_t = 1;
    }
    
    if(ma_b && ma_a && ma_j && ma_t) {
        printf("Z podanych znakow mozna utworzyc slowo 'bajt'\n");
    }
    else {
        printf("Z podanych znakow nie mozna utworzyc slowa 'bajt'\n"); 
    }
}
void podpunkt_i()
{
    char znaki[4];
    int i;
    int liczba_liter = 0;
    int liczba_cyfr = 0;
    
    printf("Podaj 4 znaki:\n");
    for(i = 0; i < 4; i++) {
        printf("Znak %d: ", i+1);
        scanf(" %c", &znaki[i]);
        
        if((znaki[i] >= 'a' && znaki[i] <= 'z') || (znaki[i] >= 'A' && znaki[i] <= 'Z')) {
            liczba_liter++;
        }
        else if(znaki[i] >= '0' && znaki[i] <= '9') {
            liczba_cyfr++;
        }
    }
    
    if(liczba_liter > liczba_cyfr) {
        printf("Wiecej jest liter (%d) niz cyfr (%d)\n", liczba_liter, liczba_cyfr);
    }
    else if(liczba_cyfr > liczba_liter) {
        printf("Wiecej jest cyfr (%d) niz liter (%d)\n", liczba_cyfr, liczba_liter);
    }
    else {
        printf("Liczba liter (%d) jest rowna liczbie cyfr (%d)\n", liczba_liter, liczba_cyfr);
    }
}
void podpunkt_j()
{
    float liczby[4];
    float min, max, suma = 0;
    int i;
    
    printf("Podaj 4 liczby rzeczywiste:\n");
    for(i = 0; i < 4; i++) {
        printf("Liczba %d: ", i+1);
        scanf("%f", &liczby[i]);
    }
    
    min = max = liczby[0];
    
    for(i = 1; i < 4; i++) {
        if(liczby[i] < min) min = liczby[i];
        if(liczby[i] > max) max = liczby[i];
    }
    
    for(i = 0; i < 4; i++) {
        if(liczby[i] != min && liczby[i] != max) {
            suma += liczby[i];
        }
    }
    
    printf("Srednia arytmetyczna po odrzuceniu wartosci skrajnych: %.2f\n", suma/2);
}