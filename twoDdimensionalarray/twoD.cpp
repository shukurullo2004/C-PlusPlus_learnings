#include <iostream>
#include <string>
using namespace std;

int main(){
    string avtos[][3] ={{"malibu", "Kobalt", "Lasseti"},
                        {"KIA5", "KIA8", "Sonata"},
                        {"Matiz","Damas", "nexia"},
                        {"rustam", "Anvar", "Bahroms"}};
    int row = sizeof(avtos)/sizeof(avtos[0]);
    int col = sizeof(avtos[0])/sizeof(avtos[0][0]);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << avtos[i][j]<< endl;
    }
}
    } 
    