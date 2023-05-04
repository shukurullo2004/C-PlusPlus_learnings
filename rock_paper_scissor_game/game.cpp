#include <iostream>
#include <cstdlib>
// #include <ctime>

using namespace std;

char getUser();
char getComputer();
void showChoice(char choice);
void chooseWinner(char getUser,char getComputer);
char player, comp;

int main(){
    
    
    player = getUser();
    cout << "your choice: " << endl;
    showChoice(player);


    comp = getComputer();
    cout << "computer choice: " << endl;
    showChoice(comp);

    chooseWinner(player, comp);
    
    
}

char getUser(){
    do {
        cout << "Welcome to our game"<<endl;
        cout << "********************"<< endl;
        cout << "let's choose one of following them" << endl;
        cout << "r for Rock " << endl;
        cout << "p for Paper" << endl;
        cout << "s for Scissor" << endl;
        cin >> player;
       
    }while(player != 'r' && player != 'p' && player != 's');
    return player;
} 

char getComputer(){

    srand(time(NULL));
    int comp = rand() % 3 +1;

    switch(comp){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}

void showChoice(char choice){
    switch (choice)
    {
    case 'r':
        cout << "Rock "<< endl;
        break;
    case 'p':
        cout << "Paper" << endl;
        break;
        
    case 's':
        cout <<"Scissor"<< endl;
        break;
    }
    
}

void chooseWinner(char player, char comp){
    switch (player)
    {
    case 'r':   if(comp == 'r'){
                    cout << "you are tie" << endl;
                }
                else if(comp == 's'){
                    cout << "you win" << endl;
                }
                else{
                    cout << "you lose" << endl;
                }
                break;
    
    case 'p':   if(comp == 'p'){
                    cout << "you are tie" << endl;
                }
                else if(comp == 'r'){
                    cout << "you win" << endl;
                }
                else{
                    cout << "you lose" << endl;
                }
                break;

    case 's':   if(comp == 's'){
                    cout << "you are tie" << endl;
                }
                else if(comp == 'p'){
                    cout << "you win" << endl;
                }
                else{
                    cout << "you lose" << endl;
                }
                break;
    }
}  