#include <iostream>
using namespace std;

int main() {
    double nums[10];
    int index, index2;
    double avr = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Enter value: ";
        cin >> nums[i];
    }

    double smallest = nums[0];
    for (int i = 1; i < 10; i++) {
        if (smallest > nums[i]) {
            smallest = nums[i];
            index = i;
        }
    }

    double largest = nums[0];
    for (int i = 1; i < 10; i++) {
        if (largest < nums[i]) {
            largest = nums[i];
            index2 = i;
        }
    }

    for (int i = 0; i < 10; i++) {
        avr = avr + nums[i];
    }
    avr = avr / 10;

    cout << "\nSmallest value: " << smallest << " index is " << index << endl;
    cout << "Largest value: " << largest << " index is " << index2 << endl;
    cout << "Average value is " << avr << endl;

    return 0;
}
