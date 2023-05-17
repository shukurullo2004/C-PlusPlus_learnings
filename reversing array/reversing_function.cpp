#include <iostream>

int main() {
    double numbers[10];

    // Read input from the user
    for (int i = 0; i < 10; i++) {
        std::cout << "Enter a real number: ";
        std::cin >> numbers[i];
    }

    // Output the numbers in reverse order
    std::cout << "Numbers in reverse order: ";
    for (int i = 9; i >= 0; i--) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
