#include <iostream>

using namespace std;

int seriesSum(int N) {
    // Initialize the sum to 0
    int sum = 0;

    // Iterate from 1 to N and add each number to the sum
    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    int N;

    // Input the value of N
    cin >> N;

    // Calculate the sum of the series and print it
    int result = seriesSum(N);
    cout << result << endl;

    return 0;
}
