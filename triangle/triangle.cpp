#include <iostream>
#include <iomanip>

using namespace std;
int length;
char symbol;
int triangle(char);

int main(){

    cout << "length: " << endl;
    cin >> length;

    cout << "symbol: "<<endl;
    cin >> symbol;
    triangle(symbol);
    
}

int triangle(char symbol){
    for(int i = length; i >=1; i--){
        for(int j = 1; j <i; j++){
        cout << setw(3) << symbol;
        }cout<<endl;
    }
    return symbol;  
}