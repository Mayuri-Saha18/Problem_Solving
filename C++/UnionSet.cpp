#include <iostream>
#include <set>

using namespace std;

int doUnion(int a[], int n, int b[], int m) {
    set<int> unionSet;

    // Add elements from the first array to the unionSet
    for (int i = 0; i < n; i++) {
        unionSet.insert(a[i]);
    }

    // Add elements from the second array to the unionSet
    for (int i = 0; i < m; i++) {
        unionSet.insert(b[i]);
    }

    // Return the size of the unionSet, which represents the count of union elements
    return unionSet.size();
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    
    int result = doUnion(a, n, b, m);
    cout << result << endl; // Output: 5

    return 0;
}
