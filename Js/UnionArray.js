function doUnion(a, n, b, m) {
    // Create two sets to store distinct elements from both arrays
    const unionSet = new Set();

    // Add elements from the first array to the union set
    for (let i = 0; i < n; i++) {
        unionSet.add(a[i]);
    }

    // Add elements from the second array to the union set
    for (let i = 0; i < m; i++) {
        unionSet.add(b[i]);
    }

    // Return the size of the union set, which represents the count of union elements
    return unionSet.size;
}

// Example usage:
const a = [1, 2, 3, 4, 5];
const b = [1, 2, 3];
const n = a.length;
const m = b.length;
const result = doUnion(a, n, b, m);
console.log(result); // Output: 5
