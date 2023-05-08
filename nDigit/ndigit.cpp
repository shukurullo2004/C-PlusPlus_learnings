#include <iostream>

void nDigit(int num);

int main() {
    nDigit(1);
    nDigit(10);
    nDigit(999);
    nDigit(1230);
    nDigit(-10);
    nDigit(-999);
    nDigit(-1230);
    nDigit(-1);
    return 0;
}

void nDigit(int num) {
    int number = num;
    int counter = 0;
        while (num != 0) {
        counter++;
        num /= 10;
        }
    

    std::cout << "Number of digits: " << counter<< ", given number is " << number << std::endl;
}
