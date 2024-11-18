#include <iostream>

using namespace std;

int Tab[7] = {5,4,1,7,6,0,3};
int A = 8;
int n = 4;

int main()
{
    for(n = 0; n < 6; n++)
    {
        if (Tab[n] < Tab[n+1]) Tab[n] = A;
    }
    for(int i = 0; i < 7;i++) cout << Tab[i] << " ";
    cout << '\n';

    n = 3;
    while(n > 0) Tab[n--] = 0;
    for(int i = 0; i < 7;i++) cout << Tab[i] << " ";
    cout << '\n';


    A = Tab[4];
    for(n = 0; n<7;n++) A = Tab[n];
    Tab[1] = A;
    for(int i = 0; i < 7;i++) cout << Tab[i] << " ";
    cout << '\n';

    return 0;
}