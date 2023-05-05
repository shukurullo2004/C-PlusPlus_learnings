#include <iostream>
using namespace std;
int recursive_sum(int,int);

int main(){
    int sum = recursive_sum(1,9);
    cout << sum;
}
int recursive_sum(int m, int n){
    if(m==n){
        return m;
    }return m + recursive_sum(m+1, n);

}