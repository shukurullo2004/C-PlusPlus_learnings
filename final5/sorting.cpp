#include <iostream>
using namespace std;
void sorting(int array[], int size){
    int temp;
    for(int i = 0; i < size; i++ ){
       for(int j = 0; j < size-1; j++){
            if(array[j] > array[j+1]){
                temp = array[j] ;
                array[j] = array[j+1];
                array[j+1] =temp;
            }
       }
    }
}
int main(){
    int arrayy[5] = {2,4,1,6,5};
    int size = sizeof(arrayy)/sizeof(arrayy[0]);
    sorting(arrayy, size);
    for(int i = 0; i <size; i++){
        cout <<arrayy[i]<<endl;
    }
    return 0;
}