// 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int _rand();

int main(){
    _rand();
    return 0;
}

int _rand(){
    srand((time(0)));
    int counts[6] = {0};

    for(int i = 0; i < 1000000; i++){
        int num = rand() % 6 + 1;
        switch (num) {
            case 1:
                counts[0]++;
                break;
            case 2:
                counts[1]++;
                break;
            case 3:
                counts[2]++;
                break;
            case 4:
                counts[3]++;
                break;
            case 5:
                counts[4]++;
                break;
            case 6:
                counts[5]++;
                break;
        }
    }

    double percentages[6];

    for(int i = 0; i < 6; i++){
        percentages[i] = (double)counts[i] / 1000000 * 100;
    }

    for(int i = 0; i < 6; i++){
        cout << i + 1 << ": " << counts[i] << ", " << percentages[i] << " %" << endl;
    }
    return 0;
}
