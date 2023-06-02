#include<iostream>
#include <string>
using namespace std;
bool palindrome(string word);

int main(){
    string word = "dad";
    palindrome(word);

    if(palindrome(word)){
        cout <<"Yes\n";
    }  
    else
        cout << "no\n";
        return 0;
}
bool palindrome(string word){
   int left = 0;
   int right = sizeof(word)-1;
   while(left < right){
    if(word[left] == word[right]){
        return true;
    }
    left++;
    right--;
   }
    return true;
}