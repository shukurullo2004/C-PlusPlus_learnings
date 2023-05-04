#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int radius = 10;
    for(int i = 0; i < 360; i++){
        double radian = i / 180.0 * M_PI;
        double x = radius * cos(radian);
        double y = radius * sin(radian);
        
        cout << i << "-gradus" <<" x:"<< x << " y:" << y <<endl;
    }
}