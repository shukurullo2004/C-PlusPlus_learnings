#include <iostream>

using namespace std;

template<typename Type>
    Type display(Type a){
        cout << a << endl;
        return 0;
    }
int main(){
    display('A');
    display(1234);
    display(123.4);
}