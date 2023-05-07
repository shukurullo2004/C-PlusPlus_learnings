#include <iostream>

template<typename T>
void swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    int k = 89;
    int f = 78;
    char c = 'c';
    char d = 'd';

    std::cout << c << "-" << d << std::endl;
    ::swap(c, d);
    std::cout << c << "-" << d << std::endl;

    std::cout << k << "-" << f << std::endl;
    ::swap(k, f);
    std::cout << k << "-" << f << std::endl;

    return 0;
}
