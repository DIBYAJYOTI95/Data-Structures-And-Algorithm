#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int n = 5;
    
    // Display array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Sum of elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;
    
    // Find maximum
    int maxVal = *max_element(arr, arr + n);
    cout << "Maximum: " << maxVal << endl;
    
    // Find minimum
    int minVal = *min_element(arr, arr + n);
    cout << "Minimum: " << minVal << endl;
    
    // Sort array
    sort(arr, arr + n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Reverse array
    reverse(arr, arr + n);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}