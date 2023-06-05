#include <iostream>
#include <string>
using namespace std;
int reverse(string word){
    int size = word.size();
    int left = 0;
    int right= size-1;
    char temp ;
    for(int i = 0; i < size/2; ++i){
        temp = word[left];
        word[left] =word[right];
        word[right] = temp;
        left++;
        right--;
    }
    cout << word<<endl;
    return 0;
}
int main(){
    string word = "birdan";
    reverse(word);
    return 0;
}