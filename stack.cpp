#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    
    // Push operations
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    
    cout << "Stack size: " << s.size() << endl;
    
    // Top operation
    cout << "Top element: " << s.top() << endl;
    
    // Pop operations
    cout << "Popping elements: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    
    // Check if empty
    if (s.empty()) {
        cout << "Stack is empty" << endl;
    }
    
    return 0;
}