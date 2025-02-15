#include <iostream>
#include <vector>

using namespace std;

vector<int> removeDuplicates(vector<int> &arr) {
  for (auto it = arr.begin(); it != arr.end() - 1;) {
    if (*it == *(it + 1)) {
      it = arr.erase(it);
    } else {
      it++;
    }
  }
  return arr;
}

int main() {
  vector<int> arr = {1, 1, 2, 2, 3, 4, 4};

  removeDuplicates(arr); // Modify in-place

  for (int num : arr) { // No need for an extra variable
    cout << num << " ";
  }
  cout << "\n";

  return 0;
}
