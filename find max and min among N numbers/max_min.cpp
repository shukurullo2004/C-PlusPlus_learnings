#include <iostream>

using namespace std;

int main(){
    int max, min, n,number;

    cout << "n= "; cin >> n; //the amount of n

    cout << "1-number " << endl; cin >> number;
 
    min = number; max = number;

    for(int i = 1; i <n; i++){
    
        cout << i+1 <<"- number enter: " << endl;
        cin >> number;

        if (number > max)
            max = number;
            
        if (number < min)       
            min = number;
        
    }
    cout << "max: " << max << endl;
    cout << "min: "<< min<<endl;

}