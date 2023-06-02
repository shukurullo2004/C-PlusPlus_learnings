#include <iostream>
using namespace std;
bool isPrime(int num);

int main(){  
    cout <<"This is program can show prime from 1 to 1000" <<endl;
    if(isPrime(234)){
        cout << "yes";
    }
    else
        cout <<"no";
    return 0;
}

bool isPrime(int num){
    for(int i = 2; i < num/2; ++i){
        if(num%i == 0){
        return false;
        }
    }
    return true;
}