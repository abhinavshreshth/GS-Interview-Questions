#include <bits/stdc++.h>
using namespace std;

// Function to find the second smallest element
int findSecondSmallest(vector<int>& vec) {
    int inSmallest[2] = {INT_MAX, INT_MAX};
    for(auto it = vec.begin();it != vec.end(); it++ ){
        if(*it < inSmallest[1]){
            inSmallest[0] = inSmallest[1]; 
            inSmallest[1] = *it;
        }
    }
    return inSmallest[0];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Predefined vector (no input)
    vector<int> arr = {4, 2, 7, 1, 5, 3};

    cout << findSecondSmallest(arr) << "\n";
    return 0;
}
