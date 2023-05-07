#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void rollDice();

int main() {
    rollDice();
    return 0;
}

void rollDice() {
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;

    srand(time(NULL));

    for (int i = 0; i < 1000000; i++) {
        int chooser = rand() % 6 + 1;
        switch (chooser) {
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
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
    double percentage1 = one /1000000.0 *100;
    double percentage2 = two /1000000.0 *100;
    double percentage3 = three /1000000.0 *100;
    double percentage4 = four /1000000.0 *100;
    double percentage5 = five /1000000.0 *100;
    double percentage6 = six /1000000.0 *100;
    cout << "1: " << one << ", " << percentage1 <<"%"<< endl;
    cout << "2: " << two << ", "<< percentage2 <<"%"<<endl;
    cout << "3: " << three << ", "<< percentage3 <<"%"<< endl;
    cout << "4: " << four << ", "<< percentage4 <<"%"<<endl;
    cout << "5: " << five << ", "<< percentage5 <<"%"<< endl;
    cout << "6: " << six << ", "<< percentage6 <<"%"<< endl;
}
