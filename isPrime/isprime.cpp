#include <iostream>
using namespace std;

bool isPrime(int num);

void printPrimesInRange(int start, int end);

int main(){
    printPrimesInRange(2, 1000);
    return 0;
}

bool isPrime(int num){
    if(num <= 1){
        return false;
    }
    
    for(int i = 2; i <= num / 2; i++){
        if(num % i == 0){
            return false;
        }
    }
    
    return true;
}

void printPrimesInRange(int start, int end){
    for(int i = start; i <= end; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
}

