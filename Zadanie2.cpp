#include <iostream>

using namespace std;

#define N 6

void wypelnanie_tablicy(int Arr[]){
    int losowa, min = -30, max = 50;
    for(int i = 0; i < N;i++)
    {
        losowa = min + rand()%(max - min +1);
        Arr[i] = losowa;
    }
}

void podpunkt_1(int Arr[]){
    int suma, srednia;
    for(int i = 0; i < N;i++)
    {
        suma += Arr[i];
    }
    srednia = suma / N;
    cout << "Srednia wartosc w tablicy: " << srednia << endl;
}

void podpunkt_2(int Arr[])
{
    int suma, srednia;
    for(int i = 0; i < N;i++)
    {
        if (Arr[i] % 2 != 0)
        {
            suma += Arr[i];
        }
    }
    srednia = suma / N;
    cout << "Średnia liczb nieparzystych w tablicy to: " << srednia << endl;
}

void najmiejsza(int Arr[])
{
    int minElement = Arr[0]; 
    int minIndex = 0; // 

    for (int i = 1; i < N; i++) {
        if (Arr[i] < minElement) {
            minElement = Arr[i];
            minIndex = i;
        }
    }
    printf("Najmniejszy element: %d, Indeks: %d\n", minElement, minIndex);
}
int main()
{
    srand (time(NULL));
    int Arr[N] = {};
    wypelnanie_tablicy(Arr);
    podpunkt_1(Arr);
    podpunkt_2(Arr);
    najmiejsza(Arr);
    for(int i = 0; i < N;i++)
    {
        cout << Arr[i] << " ";
    }

}