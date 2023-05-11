#include <iostream>
#include <string>
using namespace std;

int coutInt(int value, int base = 10, string end_string = "\n");

int main() {
    coutInt(128);
    coutInt(128, 10, " ");
    coutInt(128, 10);
    coutInt(128, 8, " ,");
    coutInt(128, 8);
    coutInt(128, 16);

    return 0;
}

int coutInt(int value, int base, string end_string) {
    switch (base) {
        case 10:
            cout << dec;
            break;
        case 8:
            cout << oct;
            break;
        case 16:
            cout << hex;
            break;
        default:
            cout << dec;
            break;
    }

    cout << value << end_string;
    return 0;
}
