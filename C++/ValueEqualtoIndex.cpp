#include <iostream>
#include <vector>

using namespace std;

vector<int> valueEqualToIndex(vector<int> &arr) {
    vector<int> result;

    for (int i = 0; i < arr.size(); i++) {
        // Check if the value at index i + 1 (1-based indexing) is equal to i + 1
        if (arr[i] == i + 1) {
            result.push_back(i + 1); // Add the index to the result vector
        }
    }

    return result;
}

int main() {
    vector<int> arr1 = {15, 2, 45, 12, 7};
    vector<int> result1 = valueEqualToIndex(arr1);
    for (int i : result1) {
        cout << i << " ";
    }
    cout << endl; // Output: 2

    vector<int> arr2 = {1};
    vector<int> result2 = valueEqualToIndex(arr2);
    for (int i : result2) {
        cout << i << " ";
    }
    cout << endl; // Output: 1

    return 0;
}
