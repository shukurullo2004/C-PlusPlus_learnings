#include <iostream>
#include <string>

using namespace std;

int main() {
    string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);
    string temp;
    
    for (int i = 0; i < size; i++) {
        cout << "Enter foods that you want or enter 'q' to exit: " << endl;
        getline(cin, temp);
        
        if (temp == "q") {
            break;
        } else {
            foods[i] = temp;
        }
    }
    
    cout << "You like these foods: " << endl;
    
    for (int i = 0; i < size; i++) {
        if (!foods[i].empty()) {
            cout << foods[i] << endl;
        }
    }
    
    return 0;
}
