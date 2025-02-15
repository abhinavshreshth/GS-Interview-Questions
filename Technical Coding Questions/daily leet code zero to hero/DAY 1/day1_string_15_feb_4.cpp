#include <iostream>
#include <algorithm>

using namespace std;

string sortString(string s) {
    sort(s.begin(),s.end());
    return;
}

int main() {
    string input = "cba";
    cout << sortString(input) << "\n"; // Output: "abc"
    return 0;
}
