#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int num;
    double price1 = 100.6;
    double price2 = 195.2;
    double price3 = 287.9;
    
    cout << "Input customer name: ";
    cin >> name; 
    cout << "Input the unit (in khw) consumed by consumer; ";
    cin >> num;
    cout << "==========Electricity bill========="<< endl;
    cout << "Customer name is " << name <<endl;

    if (num < 200){
        cout << "Unit consumed " << num << "kWh" << endl;
        cout << "Charge for per unit " << price1 << endl;
        cout << "Total charge:" << price1 * num << endl;
    }
    else if ((num > 200)&&(num < 400)){
        cout << "Unit consumed " << num << "kWh" << endl;
        cout << "Charge for per unit " << price2 << endl;
        cout << "Total charge:" << price2 * num << endl;
    }
    else{
        cout << "Unit consumed " << num << "kWh" << endl;
        cout << "Charge for per unit " << price3 << endl;
        cout << "Total charge:" << price3 * num << endl;
    }

    return 0;
}