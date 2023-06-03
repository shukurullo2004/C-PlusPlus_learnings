#include<iostream>
using namespace std;
int recursive(int num){
    if(num<2){
        return 1;
    }
    return num*recursive(num-1);
}
int main(){
    
    cout << recursive(4);

    return 0;
}

