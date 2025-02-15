#include <iostream>
#include <list>

using namespace std;

int findMiddleElement(list<int> &lst) {
    auto slow = lst.begin();
    auto fast = lst.begin();

    while (fast != lst.end() && next(fast) != lst.end()) {
        slow++;
        fast = next(fast, 2); // Move fast pointer 2 steps
    }

    return *slow; // Middle element
}

int main() {
    list<int> lst = {1, 2, 3, 4, 5};

    cout << "Middle Element: " << findMiddleElement(lst) << "\n"; // Output: 3
    return 0;
}
