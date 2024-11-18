#include <stdio.h>

float Tab[5] = {0, 0, 0, 0, 0}; // Float z wielkiej litery a nie z małej
int n = 1;

int main()
{
    for(n = 0; n <= 5;n++) Tab[5] = 3.14 * n; // Wychodzi poza granicę

    if(Tab[2] > 0) //  Srednik po if a nie powinno go tam byc
    {Tab[2] = 0;
    }else
    {Tab[2] = 3.14;
    }
    printf("Tab[0]=%3d", Tab[0]); // Typ wartości w tablicy to float a wypisanie jest przez int
    return 0;

}