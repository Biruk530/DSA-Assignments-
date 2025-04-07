**Writer**: Biruk530/Biruk Tibebe Solomon

##  Ternary Search

- **How it works**: Splits the array into **three parts** using two midpoints and narrows the search by comparing the target with both.
- **Best for**: Finding the max/min of a unimodal function; less efficient for general array searches.
- **Time Complexity**: `O(log₃ n)` — logarithmic but slower due to two comparisons per step.

---

##  Interpolation Search

- **How it works**: Estimates the target’s position using **interpolation** based on boundary values, then adjusts the search range.
- **Best for**: Sorted, **uniformly distributed** data (e.g., evenly spaced numbers).
- **Time Complexity**: `O(log log n)` average (uniform data), `O(n)` worst case (non-uniform data).

---
## Complexity Analysis

### Ternary Search

**Time Complexity:**  
`O(log₃ n)`  

**Reasoning:**  
Ternary Search works by dividing the search space into three equal parts at each step, using two comparisons to determine which third contains the target. This eliminates two-thirds of the space, reducing the problem size to one-third. The process repeats, leading to a logarithmic time complexity with base 3, expressed as `O(log₃ n)`.

**Space Complexity:**  
- **Iterative:** `O(1)`  
  The iterative version uses a fixed amount of extra space (e.g., pointers or variables), independent of the input size.  
- **Recursive:** `O(log₃ n)`  
  In the recursive version, the space complexity depends on the recursion depth, which is `O(log₃ n)` due to the number of stack frames created during the search.

---
### Interpolation Search

**Time Complexity:**  
- **Average Case:** `O(log log n)`  
  **Reasoning:** Interpolation Search estimates the target’s position based on the values at the boundaries, assuming the data is uniformly distributed. When this assumption holds, the search space shrinks rapidly with each step, resulting in a highly efficient double logarithmic complexity, `O(log log n)`.  
- **Worst Case:** `O(n)`  
  **Reasoning:** If the data distribution is uneven (e.g., exponential growth), the position estimates can be inaccurate, forcing the algorithm to check most elements one by one. This leads to a linear time complexity of `O(n)` in the worst case.

**Space Complexity:**  
- **Iterative:** `O(1)`  
  The iterative implementation uses only a constant amount of extra space for variables, regardless of input size.  
- **Recursive:** `O(log log n)` (average case), up to `O(n)` (worst case)  
  The space complexity reflects the recursion depth, which is `O(log log n)` for uniform data but can reach `O(n)` when the algorithm performs poorly due to bad distribution.

##  Comparison Table

| **Feature**         | **Ternary Search**            | **Interpolation Search**      |
|---------------------|-------------------------------|-------------------------------|
| **Approach**        | Divides into 3 parts          | Estimates position            |
| **Comparisons**     | 2 per step                    | 1 per step                    |
| **Time Complexity** | O(log₃ n)                     | O(log log n) avg, O(n) worst  |
| **Ideal Use**       | Unimodal optimization         | Uniformly distributed arrays  |

---

##  Summary

- **Ternary Search**: Good for specific optimization tasks, not general searches.
- **Interpolation Search**: Fast for uniform data, risky with uneven distributions.
- For most array searches, **Binary Search** (`O(log n)`) is simpler and more reliable.
