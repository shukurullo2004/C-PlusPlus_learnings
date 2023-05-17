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
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;

    

    for(int i = 0; i < 1000000; i++){
        int num = rand()%6 +1;
       
        switch (num)
        {
        case 1:
            one++;
            break;
        case 2:
            two++;
            break;
        case 3:
            three++;
            break;
        case 4:
            four++;
            break;
        case 5:
            five++;
            break;
        case 6:
            six++;
            break;
        }
    }
    double percentage1 = (double)one/1000000 *100 ;
    double percentage2 = (double)two/1000000 *100 ;
    double percentage3 = (double)three/1000000 *100 ;
    double percentage4 = (double)four/1000000 *100 ;
    double percentage5 = (double)five/1000000 *100 ;
    double percentage6 = (double)six/1000000 *100 ;

    double sum = percentage1+ percentage2+percentage3+percentage4+percentage5+percentage6;

    
    cout <<"1: "<<  one<<", " << percentage1 << " %" <<endl;
    cout <<"2: "<<  two<<", " << percentage2 << " %" << endl;
    cout <<"3: "<<  three<<", " << percentage3 << " %" << endl;
    cout <<"4: "<<  four<< ", " << percentage4 << " %" <<endl;
    cout <<"5: "<<  five<< ", " << percentage5 << " %" <<endl;
    cout <<"6: "<<  six<< ", " << percentage6 << " %" <<endl;

    cout << sum;
    return 0;
}