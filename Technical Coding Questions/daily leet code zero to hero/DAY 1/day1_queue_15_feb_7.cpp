#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st; // Declare a stack of integers

    // Push elements into the stack
    st.push(5);
    st.push(10);

    // Get the top element
    cout << "Top element: " << st.top() << "\n"; // Output: 10

    // Pop the top element
    st.pop();

    // Get the new top element
    cout << "Top element after pop: " << st.top() << "\n"; // Output: 5

    return 0;
}
