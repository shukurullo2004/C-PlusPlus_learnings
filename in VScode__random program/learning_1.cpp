#include <iostream>
#include <stdlib.h>  //for random
#include <time.h> // for one repitation

using namespace std;

int main()
{
    int x, a = -1; 
    srand(time(NULL));
    x = rand() % 100 +1 ;

    while (a != x)
    {
        cout << "O'ylangan sonni toping: "; cin >> a;

        if ( a < x)
            cout << "komp o'ylagan son kattaroq" << endl;

        else
        if (a > x)
            cout << "komp oylagan son kichikroq " << endl;

        else
        {
            cout << "URAA siz topdingiz bu " << x << " soni edi" << endl;
        } 
    }  
    return 0; 
}