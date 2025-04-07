# Smallest Number Finder

## Overview
This is a simple C++ program that finds the smallest number in a given array of integers. The program demonstrates basic array manipulation and comparison techniques using a custom function.

## Features
- Takes an array of integers as input
- Finds the smallest number in the array
- Returns and displays the result

## Code Structure
The program consists of two main parts:
1. `findSmallest()` function:
   - Takes an integer array and its size as parameters
   - Returns the smallest number found in the array
2. `main()` function:
   - Initializes a sample array
   - Calculates array size
   - Calls findSmallest() and displays the result

## How It Works
1. The program starts by assuming the first element is the smallest
2. It then iterates through the array comparing each element with the current smallest
3. If a smaller number is found, it updates the smallest number
4. Finally, it returns and prints the smallest number

## Requirements for Smallest Number Finder

- C++ compiler (e.g., g++, clang++, MSVC)
- Standard C++ library (included with compiler)

## How to Compile and Run Smallest Number Finder

1. Save the code in a file with a `.cpp` extension (e.g., `smallest.cpp`)
2. Open a terminal in the directory containing the file
3. Compile the program using:
   g++ smallest.cpp -o smallest
4. Run the program:
   ./smallest   (Linux/Mac)
   smallest.exe (Windows)

## Limitations of Smallest Number Finder

- Works only with integer arrays
- Assumes the input array is not empty
- Array size must be correctly specified

## Sample Usage
```cpp
int arr[] = {86, 74, 11, 99, 57, 6, 61, 73};