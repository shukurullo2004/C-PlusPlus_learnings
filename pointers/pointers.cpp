#include <iostream>

using namespace std;


void print(void* ptr, char type){
    if(type == 'i'){
        cout << *((int*)ptr) << endl;
    }
    else if (type == 'c'){
        cout << *((char*)ptr) << endl;
    }
}
template<typename T>
    void show(T*ptr){
        cout  << *ptr << endl;
    }

int main(){
   int n = 5;
   cout << &n <<endl; 
   int *ptr = &n;
   cout << ptr << endl;
   cout << *ptr << endl;
   *ptr = 10;
   cout << *ptr << endl;

    int v;
    int *ptr2 = &v;
    *ptr2 = 7;
    cout << *ptr2;
         int number1 =32;
    char letter1 ='x';

    print(&number1,'i');
    print(&letter1,'c');

        show(&number1);
}
