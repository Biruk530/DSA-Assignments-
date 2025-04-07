#  Binary Search in C++

This project demonstrates **Binary Search** implemented using both **iterative** and **recursive** approaches in C++.

---
> **Note**:
 - Binary search requires the array to be sorted.

 - Recursive version may hit stack overflow for large arrays due to deep recursion.

##  Problem Statement

Given a **sorted array**, search for a **target element** using the **Binary Search algorithm**. Return the index of the target if found, otherwise return `-1`.

---

##  Approaches

###  Iterative Approach

- Uses a loop (`while`) to repeatedly divide the search interval in half.
- Continues until the target is found or the search interval is empty.

**Steps:**
1. Initialize `low` to 0 and `high` to `n - 1`.
2. Compute `mid = (low + high) / 2`.
3. If `arr[mid] == target`, return `mid`.
4. If `arr[mid] < target`, search in the right half (`low = mid + 1`).
5. Else, search in the left half (`high = mid - 1`).
6. Repeat until `low > high`.

---

###  Recursive Approach

- Uses function recursion to perform the same logic as iterative.
- Function calls itself with updated bounds (`low`, `high`) until base condition is met.

**Steps:**
1. Base case: if `low > high`, return `-1`.
2. Compute `mid = (low + high) / 2`.
3. If `arr[mid] == target`, return `mid`.
4. If `arr[mid] < target`, recursively call on the right half.
5. Else, recursively call on the left half.

---

##  Time and Space Complexity

| Approach   | Time Complexity | Space Complexity           |
|------------|------------------|-----------------------------|
| Iterative  | O(log n)         | O(1) (constant space)       |
| Recursive  | O(log n)         | O(log n) (call stack space) |

---
# My Summarize of Binary Search 
  - Binary Search is an efficient algorithm for searching in sorted arrays, with O(log n) time complexity.
  
  - Iterative Approach uses a loop and has:
    - Time Complexity: O(log n)
    - Space Complexity: O(1) — no extra memory used

  - Recursive Approach uses self-calling functions and has:
    - Time Complexity: O(log n)
    - Space Complexity: O(log n) — due to recursive call stack
---
##  Conclusion

- Both approaches are efficient in terms of time.
- **Iterative** is more space-efficient, making it **better for large arrays**.
- **Recursive** is elegant and easier to write for some, but less efficient in memory.

##  Sample Input

```cpp
int arr[] = {2, 4, 7, 10, 13, 18, 21, 25, 30};
int target = 13;
