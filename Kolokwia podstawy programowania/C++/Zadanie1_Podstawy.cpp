#include <iostream>
#include <unordered_map>
using namespace std;

void podpunkt_a();
void podpunkt_b();

int main()
{
    podpunkt_a();
    podpunkt_b();
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
    string slowo = "";
    char znak;
    bool znaleziono = false;
    int licznik_t = 0, licznik_a = 0, licznik_o = 0;

    cout << "Wpisuj znaki, az utworza slowo 'tato':" << endl;

    while (!znaleziono) {
        cin >> znak;
        
        if (znak == 't') licznik_t++;
        else if (znak == 'a') licznik_a++;
        else if (znak == 'o') licznik_o++;
        
        if (licznik_t >= 2 && licznik_a >= 1 && licznik_o >= 1) {
            znaleziono = true;
        }
        
        slowo += znak;
    }

    cout << "Zebrano wystarczajaco znakow do utworzenia slowa 'tato'!" << endl;
}
