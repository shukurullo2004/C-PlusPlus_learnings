#include<iostream>
#include <iomanip>
using namespace std;
int rectangle(){
    int width, height;
    char symbol;
    cout << "Enter width: "; cin >>width;
    cout << "\nEnter height: "; cin >>height;
    cout << "\nEnter symbol: "; cin >>symbol;
    for(int i = 0; i <height; i++){
        for(int j = 0; j <width; j++){
            cout <<setw(2) << symbol;
        }
        cout << endl;
    }
    return 0;
}
int triangle(){
    int width, height;
    char symbol;
    cout << "Enter width: "; cin >>width;
    cout << "\nEnter height: "; cin >>height;
    cout << "\nEnter symbol: "; cin >>symbol;
    for(int i = 0; i <height; i++){
        for(int j = 0; j < i; j++){
            cout <<setw(2) << symbol;
        }
        cout << endl;
    }
    return 0;
}
int pyramid (){
    int rows,space;
cout <<"Enter number of rows: ";
    cin >> rows;
    

    for(int i = 1, k = 0; i <= rows; ++i, k = 0) {
        for(space = 1; space <= rows-i; ++space) {
            cout <<"  ";
            
        }

        while(k != 2*i-1) {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}

int main(){
    pyramid();
    return 0;
    }