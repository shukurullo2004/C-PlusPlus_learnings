#include <iostream>
using namespace std;
int main() {
  int i = 1;
  while (i < 10) {
    int j = 1;
    i++;
    while (j < 10) {
      cout << i << "*" << j << "=" << i * j << endl;
      j++;
    }
    cout << endl;
  }
}
