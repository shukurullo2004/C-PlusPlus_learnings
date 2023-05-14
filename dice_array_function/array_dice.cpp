#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int _rand();

int main(){
    srand((time(0)));
    _rand();
    return 0;
}

int _rand(){
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;

    int num = rand()%6 +1;

    for(int i = 0; i < 1000000; i++){
        switch (num)
        {
        case 1:
            one++;
            break;
        case 2:
            two++;
        case 3:
            three++;
            break;
        case 4:
            four++;
            break;
        case 5:
            five++;
            break;
        case 6:
            six++;
            break;
        }
    }
    cout << one<< endl;
    cout << two<< endl;
    cout << three<< endl;
    cout << four<< endl;
    cout << five<< endl;
    cout << six<< endl;
    return 0;
}