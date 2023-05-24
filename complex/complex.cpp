#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void Myfunction(int array[20][20]);
void printArray(int array[20][20]);
void SumRowandCol(int array[20][20]);
void SumDioganal(int array[20][20]);
void FindMaxRowAndCol(int array[20][20]);





int main() {
    int array[20][20];
    

    Myfunction(array);
    printArray(array);
    SumRowandCol(array);
    SumDioganal(array);
    FindMaxRowAndCol(array);

    return 0;

}



void Myfunction(int array[20][20]) {
    srand(time(0));
    for(int i = 0; i < 20; ++i) {
        for(int j = 0; j < 20; ++j) {
            array[i][j] = rand() % 100;
        }
    }
}

void printArray(int array[20][20]){
    for(int i = 0; i < 20; i++) {
        for(int k = 0; k < 20; k++) {
            cout << setw(2) << array[i][k] << " ";
        }
        cout << endl;
    }
}

void SumRowandCol(int array[20][20]) {
    int numR, numZ;
    cout << "Enter index of row for row_sum(): ";
    cin >> numR;
    cout << "Enter index of col for col_sum(): ";
    cin >> numZ;

    int sumRow = 0;
    int sumCol = 0;

    // Calculate the sum of the specified row
    for (int j = 0; j < 20; ++j) {
        sumRow += array[numR][j];
    }

    // Calculate the sum of the specified column
    for (int i = 0; i < 20; ++i) {
        sumCol += array[i][numZ];
    }

    cout << "Sum of Row " << numR << ": " << sumRow << endl;
    cout << "Sum of Column " << numZ << ": " << sumCol << endl;
}

void SumDioganal(int array[20][20]) {
    int sumDiagonal = 0;
    int sumBackward = 0;

    // Calculate the sum of the diagonal elements
    for (int i = 0; i < 20; ++i) {
        sumDiagonal += array[i][i];
    }

    // Calculate the sum of the backward diagonal elements
    for (int j = 0; j < 20; ++j) {
        sumBackward += array[j][19 - j];
    }

    cout << "Sum of Diagonal: " << sumDiagonal << endl;
    cout << "Sum of Backward Diagonal: " << sumBackward << endl;
}

void FindMaxRowAndCol(int array[20][20]){
    int temp = 0;

    int col, row;
    for(int i = 0; i< 20; i++){
        for(int j = 0; j < 20 ; ++j){
            if(temp < array[i][j]){
                temp = array[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout <<"The row max largest sum: "<< row << endl;
    cout <<"The col max largest sum: "<< col << endl;
}

