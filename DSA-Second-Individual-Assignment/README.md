**Writer**: Biruk530/Biruk Tibebe Solomon

# Complexity Analysis

Below is the time and space complexity analysis for the pointer-based sorting algorithms: 
Bubble Sort, Selection Sort, and Quick Sort.

## Bubble Sort
- **Time Complexity**:
  - Best Case: O(n) - Array is already sorted, no swaps needed
  - Average Case: O(n²) - Nested loops for comparisons and swaps
  - Worst Case: O(n²) - Reversed array
- **Space Complexity**: O(1) - In-place sorting
- **Characteristics**: Compares and swaps adjacent elements

## Selection Sort
- **Time Complexity**:
  - Best Case: O(n²) - Always scans entire unsorted portion
  - Average Case: O(n²)
  - Worst Case: O(n²)
- **Space Complexity**: O(1) - In-place sorting
- **Characteristics**: Finds minimum in unsorted portion

## Insertion Sort
 **Time Complexity**:
 - Best Case: O(n) – Array is already sorted
 - Average Case: O(n²)
 - Worst Case: O(n²) – Reversed array
**Space Complexity**: O(1) – In-place sorting
**Characteristics**: Builds sorted portion one element at a time; adaptive and stable
# Comparison of Sorting Algorithms

The table below compares the pointer-based implementations of **Bubble Sort**, **Selection Sort**, and **Insertion Sort**.

| Algorithm      | Best Case | Average Case | Worst Case | Space Complexity | Stable? |
|----------------|-----------|--------------|------------|------------------|---------|
| Bubble Sort    | O(n)      | O(n²)        | O(n²)      | O(1)             | Yes*    |
| Selection Sort | O(n²)     | O(n²)        | O(n²)      | O(1)             | No      |
| Insertion Sort | O(n)      | O(n²)        | O(n²)      | O(1)             | Yes     |

> **Note**: Bubble Sort is not explicitly stable in this implementation but can be modified to be stable.

---

## Key Observations

- **Time Efficiency**:
  - Insertion Sort is the most efficient among the three for small or nearly sorted arrays due to its O(n) best case.
  - Bubble Sort and Selection Sort have O(n²) time in most cases and are not suitable for large datasets.
  - Bubble Sort performs better than Selection Sort on nearly sorted input.

- **Space Efficiency**:
  - All three algorithms are in-place and require **O(1)** auxiliary space.

- **Use Cases**:
  - **Bubble Sort**: Educational use; works fine on very small or almost sorted datasets.
  - **Selection Sort**: When the number of swaps needs to be minimized.
  - **Insertion Sort**: Best for small or nearly sorted arrays due to its adaptive nature and stability.

# Summary of Findings

The pointer-based sorting algorithms (Bubble Sort, Selection Sort, and Quick Sort) exhibit distinct characteristics:

1. **Insertion Sort**:
   - Efficient for small or nearly sorted datasets with O(n) best-case time complexity.
   - Average and worst-case performance is O(n²).
   - Adaptive and stable, making it ideal for partially sorted arrays.
2. **Bubble Sort**:
   - Least efficient for large arrays (O(n²) average/worst).
   - O(n) best case for nearly sorted arrays; simple to implement.
3. **Selection Sort**:
   - O(n²) in all cases, fewer swaps than Bubble Sort.
   - Lacks best-case advantage but consistent for small datasets.
4. **Pointer Impact**:
   - Pointers slightly reduce indexing overhead, but algorithmic complexity dominates performance.
5. **Practical Implications**:
   - Small arrays (n < 50): Any algorithm works.
   - Large arrays (n > 1000): Quick Sort is optimal unless memory is limited.
   - Bubble/Selection: Useful for educational purposes or niche scenarios.

## Conclusion
Insertion Sort with pointers is the recommended choice for small or nearly sorted datasets due to its adaptive behavior and simplicity. Bubble Sort and Selection Sort are best suited for learning purposes or simple tasks. While pointers can improve low-level performance, they do not change the algorithm's overall complexity.