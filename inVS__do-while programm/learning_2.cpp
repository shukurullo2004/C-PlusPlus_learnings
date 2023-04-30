#include <iostream>
#include <string>

using namespace std;

int main()
{
    int m, n, op;
    std::string kol;

    do
    {
        cout << "1:qiymat berish\n2:kopaytirish\n3:bolish\n4:chiqish" << endl;
        cin >> op;
    
    switch(op)
    {
        case 1: cout << "m = "; cin >> m; cout << "n = "; cin >> n; break;
        case 2: cout << m << "*" << n << "=" << m * n <<endl; break;
        case 3: cout << m << "/" << n << "=" << m / n <<endl; break;
        case 4: break;
    }
}   while( op != 4);
         cout << "thank you for using C++";


    return 0;
}