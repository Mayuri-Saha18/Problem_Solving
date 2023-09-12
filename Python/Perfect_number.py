def isPerfectNumber(N):
    if N == 1:
        return 0

    sum = 1  # Start with 1 since every number is divisible by 1

    # Iterate through numbers from 2 to the square root of N
    for i in range(2, int(N**0.5) + 1):
        if N % i == 0:
            # i is a divisor of N
            sum += i + (N // i)

    # Check if the sum of divisors (excluding N itself) is equal to N
    if sum == N:
        return 1  # N is a perfect number
    else:
        return 0  # N is not a perfect number

# Example usage:
N = 28
result = isPerfectNumber(N)
print(result)  # Output: 0 (28 is not a perfect number)
