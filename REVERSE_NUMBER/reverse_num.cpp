#include <iostream>

using namespace std;
int number, reverse_number = 0;

int reverse_num(int);
int main(){

    cout << "Enter number"<<endl;
    cin >> number;
    int son = reverse_num(number);
    cout << "reversed: " << son;
    return 0;
}

int reverse_num(int number){
    while(number!=0){

        reverse_number *= 10;
        reverse_number =  reverse_number + (number%10);
        number= number/10;
    }
    return reverse_number;

}
