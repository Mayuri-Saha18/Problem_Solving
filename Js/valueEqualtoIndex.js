function valueEqualToIndex(arr) {
    const result = [];

    for (let i = 0; i < arr.length; i++) {
        // Check if the value at index i + 1 (1-based indexing) is equal to i + 1
        if (arr[i] === i + 1) {
            result.push(i + 1); // Add the index to the result array
        }
    }

    return result;
}

// Example usage:
const arr1 = [15, 2, 45, 12, 7];
const result1 = valueEqualToIndex(arr1);
console.log(result1); // Output: [2]

const arr2 = [1];
const result2 = valueEqualToIndex(arr2);
console.log(result2); // Output: [1]
