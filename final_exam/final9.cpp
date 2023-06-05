#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <cctype>
#include <algorithm>

using namespace std;

void wordFrequencyCounter(const string& text) {
    map<string, int> wordFrequencyMap;
    stringstream ss(text);
    string word;

    while (ss >> word) {
        // Remove punctuation and special characters
        word.erase(remove_if(word.begin(), word.end(), [](char c) {
            return !isalpha(c);
        }), word.end());

        // Convert the word to lowercase
        transform(word.begin(), word.end(), word.begin(), ::tolower);

        // Increment the frequency of the word in the map
        ++wordFrequencyMap[word];
    }

    // Display the word-frequency pairs
    for (const auto& pair : wordFrequencyMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

int main() {
    string text;
    cout << "Enter a paragraph of text: ";
    getline(cin, text);

    // Call the wordFrequencyCounter function with the processed text
    wordFrequencyCounter(text);

    return 0;
}
