#include <iostream>
#include <unordered_map>
using namespace std;

void podpunkt_a();
void podpunkt_b();

int main()
{
    podpunkt_a();
}

void podpunkt_a()
{
    unordered_map<int, int> licznik;
    int liczby;
    int dwojki = 0, trojki = 0, czworki = 0;
    for (int i = 0; i < 4; i++)
    {
        cout << "Liczba " << (i + 1) << ": ";
        cin >> liczby;
        licznik[liczby]++;
    }
    for (const auto &indeks : licznik)
    {
        if (indeks.second == 2)
        {
            dwojki++;
        }
        else if (indeks.second == 3)
        {
            trojki++;
        }
        else if (indeks.second == 4)
        {
            czworki++;
        }
    }
    cout << "Liczba par: " << dwojki << endl;
    cout << "Liczba trojek: " << trojki << endl;
    cout << "Liczba czworek: " << czworki << endl;
}

void podpunkt_b()
{
}