#include <iostream>

using namespace std;

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




}
