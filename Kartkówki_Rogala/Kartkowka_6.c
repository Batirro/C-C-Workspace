 #include <stdio.h>

 int add(int a, int b) {
   int result = a + b; // Brak return,  to jest zly kod
   //return result; // Poprawnie
 }

 int main() {
   int sum = add(5, 3);
   printf("Suma: %d\n", sum); //Wypisze losowa wartosc
   return 0;
 }