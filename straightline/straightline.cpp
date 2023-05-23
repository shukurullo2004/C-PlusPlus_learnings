#include<iostream>

using namespace std;
double sum_x(double x[]);
double sum_y(double y[]);
double sum_xy(double x[], double y[]);
double sumxMsumy(double x[], double y[]);
double sum_xSqr(double x[]);
double sum_xSqr2(double x[]);
double averageX(double x[]);
double averageY(double y[]);

int main(){
    double x[10] = {3, 4.5, 5.5, 6.5, 7.5, 8.5, 8.0, 9.0, 9.5, 10.0};
    double y[10] = {1.5, 2.0, 3.5, 5, 6.0, 7.5, 9.0, 10.5, 12.0, 14.0};
    double a, b;
    b = (10*sum_xy(x,y)-sumxMsumy(x,y))/(10*sum_xSqr(x)-sum_xSqr2(x));
    a = averageY(y)-averageX(x) * b;


    cout << "Line: y = " << a << "+"<< b << "x" << endl;
    return 0;
}
double sum_x(double x[]){
        double sum = 0.0;
        for(int i = 0; i <10; i++){
            sum = sum + x[i];
        }
        return  sum;
}
double sum_y(double y[]){
    double sum = 0.0;
    for(int i = 0; i <10; i++){
        sum = sum + y[i];
    }
    return sum;
}
double sum_xy(double x[], double y[]){
    double sum = 0.0;
    for(int i = 0; i <10; i++){
        sum += y[i] * x[i];
    }
    return  sum;
}
double sumxMsumy(double x[], double y[]){
    double sum1  = 0.0;
    double sum2  = 0.0;
    for(int i = 0; i < 10 ; i++){
        sum1 = sum1 + x[i];
    }
    for(int j = 0; j < 10 ; j++){
        sum2 = sum2 + y[j];
    }
    return sum1*sum2;
}
double sum_xSqr(double x[]){
    double sum  = 0.0;
    for(int i = 0; i < 10 ; i++){
        sum = sum +(x[i] *x[i]);
    }
    return sum;
}
double sum_xSqr2(double x[]){
      double sum  = 0.0;
    for(int i = 0; i < 10 ; i++){
        sum = sum + x[i];
    }
    return sum * sum;
}
double averageX(double x[]){
       double sum = 0.0;
        for(int i = 0; i <10; i++){
            sum = sum + x[i];
        }
        return  sum/10;
}   
double averageY(double y[]){
    double sum = 0.0;
    for(int i = 0; i <10; i++){
        sum = sum + y[i];
    }
    return sum/10;
}
