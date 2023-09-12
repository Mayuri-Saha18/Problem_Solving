#include <iostream>
#include <cmath>

using namespace std;

int isPerfectNumber(long long N) {
    if (N == 1) {
        // Special case: 1 is not a perfect number
        return 0;
    }

    long long sum = 1; // Start with 1 since every number is divisible by 1

    // Iterate through numbers from 2 to sqrt(N)
    for (long long i = 2; i <= sqrt(N); i++) {
        if (N % i == 0) {
            // i is a divisor of N
            sum += i+N/i;
            
        }
    }

    // Check if the sum of divisors (excluding N itself) is equal to N
    if (sum == N) {
        return 1; // N is a perfect number
    } else {
        return 0; // N is not a perfect number
    }
}

int main() {
    long long N;
    cin >> N;
    int result = isPerfectNumber(N);
    cout << result << endl;
    return 0;
}
