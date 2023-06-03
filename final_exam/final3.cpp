#include <iostream>
using namespace std;
int main(){
    int num ;
    long long output = 0;
    cout << "Enter a number, i will show you magic  :)" <<endl;
    cin >> num;
    for(int i = 1; i <=num ; i ++){
        if(i <= 9){
        output *= 10;
        output += i;
        }
        
        else{
        output *= 100;
        output += i;
        }
    }
    

    cout << output << endl;
        
    return 0;
}