#include <iostream>

using namespace std;
const int SIZE = 10;

void sort_ascending(double array[]);
void sort_descending(double array[]);

int main(){
    double num[10] = {};
    for(int i = 0; i < 10; i ++){
        cout<< "Enter a real number:   ";
        cin >> num[i];
    }
    cout<< "====Inputed real numbers===="<<endl;
    for(int i = 0; i < 10; i ++){
        cout <<num[i] <<"  ";
    }cout <<endl;
    
    sort_ascending(num);
    sort_descending(num);
}

void sort_ascending(double array[]){
    double temp;
    for(int i = 0; i < SIZE -1; i++){
        for(int j = 0; j < SIZE - i -1; j ++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] =array[j+1];
                array[j+1] = temp;
                }
        }
            
    }
    cout<< "====Ascending order====" << endl;
    for(int i = 0; i < 10; i ++){
        cout << array[i]<< "  ";
    }
    cout << endl;
}
void sort_descending(double array[]){
    double temp;
    for(int i = 0; i < SIZE -1; i++){
        for(int j = 0; j < SIZE - i -1; j ++){
            if(array[j] < array[j+1]){
                temp = array[j];
                array[j] =array[j+1];
                array[j+1] = temp;
                }
        }
            
    }
    cout<< "====Descending order====" << endl;
    for(int i = 0; i < 10; i ++){
        cout << array[i]<< "  ";
    }
}
