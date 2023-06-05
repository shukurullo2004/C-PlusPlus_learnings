 #include <iostream>

using namespace std;

int fibonachi(int n) {
    if (n <= 2) {
        return 1;
    } else {
        return fibonachi(n-1) + fibonachi(n-2);
    }
}

int main() {
    int n;
    cout << "n:";
    cin >> n;
    for(int i =1; i <n; i++){
    cout<< fibonachi(i) <<endl;
    }
    return 0;
}
