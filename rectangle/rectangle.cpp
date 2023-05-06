#include <iostream>
#include <iomanip>

using namespace std;
int height, width;
char symbol;
int rectangle(char symbol);

int main(){
    cout << "height: " << endl;
    cin >> height;
    cout << "width: " << endl;
    cin >> width;
    cout << "symbol: " << endl;
    cin >> symbol;
    int rectangle1 = rectangle(symbol);
}
int rectangle(char symbol){
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            cout << setw(3) << symbol;
        }
        cout <<endl;
    }
    return symbol; 
}
