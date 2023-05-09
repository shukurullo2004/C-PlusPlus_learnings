#include <iostream>
using namespace std;

void swap(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}

double exam(double& n1, double& n2, double& n3) {
    if (n1 > n2) {
        swap(n1, n2);
    }
    if (n1 > n3) {
        swap(n1, n3);
    }
    if (n2 > n3) {
        swap(n2, n3);
    }
    
    double sum = n1 + n2 + n3;
    double average = sum / 3.0;

    return average;
}

int main() {
    double n1 = 10.3, n2 = -22.0, n3 = 77.7, avg = 0.0;

    cout << "Arguments: " << n1 << " " << n2 << " " << n3 << endl;
    avg = exam(n1, n2, n3);

    cout << "Minimum value: " << n1 << endl;
    cout << "Maximum value: " << n3 << endl;
    cout << "Sum of the values: " << n1 + n2 + n3 << endl;
    cout << "Average value: " << avg << endl;

    return 0;
}
