#include <iostream>
#include <unordered_map>

using namespace std;

char mostFrequentChar(const string &s) {

    unordered_map<char, int> frequency;
    
    // Count character frequencies
    for(char c : s){
        frequency
    }






    char mostFrequent = '\0';
    int maxCount = 0;

    // Find the most frequent character
    for (auto &pair : freq) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mostFrequent = pair.first;
        }
    }

    return mostFrequent;
}

int main() {
    string input = "hello world";
    cout << mostFrequentChar(input) << "\n";
    return 0;
}
