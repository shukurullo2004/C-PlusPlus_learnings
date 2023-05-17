#include <iostream>

using namespace std;

int getMax(int number[], int size) {
    int max = number[0];
    for (int i = 1; i < size; i++) {
        if (number[i] > max) {
            max = number[i];
        }
    }
    return max;
}



int main() {
    int num[4] = {900, 9, -67, 1000000};
    int size = sizeof(num) / sizeof(num[0]);

    cout << getMax(num,  size) << endl;

    return 0;
}
