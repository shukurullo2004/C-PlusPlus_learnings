#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;
int fill_array(int array[10][10]){
    srand(time(nullptr));
    for(int i=0; i<10;++i){
        for(int j= 0; j <10; j++){
            array[i][j] =rand()%100;
            cout << setw(4) << array[i][j];
        }cout << endl<<endl<<endl;
    }cout << "this is original array."<<endl;
    return 0;
}
int transpose(int array[][10]){
    for(int i=0; i<10;++i){
        for(int j= 0; j <10; j++){
            array[i][j] =array[i][j];
            }
        }
    for(int j=0; j<10;++j){
        for(int i= 0; i<10; i++){
            cout << setw(4) << array[i][j];
        }cout << endl<<endl<<endl;
    }cout << "this is transpose." <<endl;
    return 0;
};
int findmax(int array[10][10]){
    int max = array[0][0];
    int maxRow;
    int maxCol;
    for(int i=0; i<10;++i){
        for(int j= 0; j <10; ++j){
        if(array[i][j] > max){
            max = array[i][j];
            maxCol = j+1;
            maxRow =i+1;
            }
        }
    }
    cout <<"max value is " << max <<endl;
    cout <<"max row is "<< maxRow<<endl;
    cout <<"max col is "<< maxCol<<endl;
    return 0;
}
int multiplication(int array[10][10]){
    int mul;
    for(int i=0; i<10;++i){
        mul = 0;
        for(int j= 0; j <9; ++j){
            mul = array[i][j]+array[i][j+1];
        }
        cout <<"sum of "<<i+1<<"-row  " << mul<< endl;
}
}
int main(){
    srand(time(nullptr));
    int array[10][10];
    fill_array(array);
    findmax(array);
    transpose(array);
    multiplication(array);
    
    return 0;
}
