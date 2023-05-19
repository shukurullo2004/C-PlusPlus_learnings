#include<iostream>

using namespace std;

int main(){
    double x[10] = {3, 4.5, 5.5, 6.5, 7.5, 8.5, 8.0, 9.0, 9.5, 10.0};
    double y[10] = {1.5, 2.0, 3.5, 5, 6.0, 7.5, 9.0, 10.5, 12.0, 14.0};

    double sum_x = 0.0;
    for(int i = 0; i <10; i++){
        sum_x = sum_x + x[i];
    }
    double sum_y = 0.0;
    for(int i = 0; i <10; i++){
        sum_y = sum_y + y[i];
    }
    double sum_xy = 0.0;
    for(int i = 0; i <10; i++){
        sum_xy += y[i] * x[i];
    }
    double sumxy = sum_x*sum_y;

    double sum_x_sqr = 0.0;

    for(int i = 0; i < 10; i++){
    double sum_x_sqr = sum_x_sqr + x[i]*x[i];
    }
    
    double sumx_sqr = sum_x * sum_x;

    double b = (10*sum_xy - sumxy) / (10* sum_x_sqr - sumx_sqr);
    double a = (sum_y/10) - (b*sum_x/10) ; 
    cout << "Line: y = " << a << b << "x" << endl;


}