#include<iostream>
using namespace std;
struct rectangle{
    double heigh;
    double width;
};
int main(){
    rectangle R1;
    cin >> R1.heigh >> R1.width;
    double Area = R1.heigh *R1.width;
    double Peri = R1.width * R1.width;
    cout << Area<<" m^2\n";
    cout << Peri<<" m\n";
}