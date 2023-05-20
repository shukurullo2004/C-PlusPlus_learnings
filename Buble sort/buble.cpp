#include <iostream>

using namespace std;

void sort(int array[], int size);
int main(){
    int num[] = {4,1,9,3,8,2,5,7,6,10,13,12,11};
    int size = sizeof(num)/sizeof(num[0]);
    
    sort(num, size);

    for(int i = 0; i < size ; i++){
        cout <<  num[i] <<endl;
    }
}

void sort(int array[], int size){
    int temp;
    for(int i = 0; i < size -1; i++){
        for(int j = 0; j < size - i -1; j ++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] =array[j+1];
                array[j+1] = temp;
                }
        }
            
    }
}