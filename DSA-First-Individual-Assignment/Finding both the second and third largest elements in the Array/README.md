# Largest Elements Finder

## Overview
This C++ program finds the second largest and third largest numbers in a given array of integers. It demonstrates array traversal and comparison techniques using custom functions to identify ranked elements.

## Features
- Takes an integer array as input
- Finds the second largest number
- Finds the third largest number
- Includes basic error handling for insufficient array sizes
- Displays the original array and results

## Code Structure
The program consists of three main functions:
1. `findLargest()`: Finds the largest number in the array
2. `findSecondLargest()`: Finds the second largest number
3. `findThirdLargest()`: Finds the third largest number
4. `main()`: Sets up the array, calls the functions, and displays results

## How It Works
- **Second Largest**: 
  - First finds the largest number
  - Then finds the largest number that's smaller than the maximum
- **Third Largest**: 
  - Uses a single pass to track the top three numbers
  - Updates first, second, and third largest as it iterates
- Returns `-1` if there aren't enough elements (less than 2 for second, less than 3 for third)

# Requirements

- **C++ Compiler**: Any standard C++ compiler (e.g., g++, clang++, MSVC)
- **Standard C++ Library**: Included with the compiler, required for `iostream` functionality

# How to Compile and Run

Follow these steps to compile and execute the Largest Elements Finder program:

1. **Save the Code**: Save the source code in a file with a `.cpp` extension (e.g., `largest_finder.cpp`)
2. **Open Terminal**: Navigate to the directory containing the file using a terminal or command prompt
3. **Compile**: Use the following command to compile the program:
   ```bash
   g++ largest_finder.cpp -o largest_finder
   
# Limitations

- **Integer Only**: The program works exclusively with integer arrays
- **Positive Numbers Assumed**: Uses `-1` as an error indicator, which may conflict with negative numbers in the array
- **Minimum Size**: 
  - Requires at least 2 elements to find the second largest
  - Requires at least 3 elements to find the third largest
- **Duplicates**: Does not explicitly handle duplicate values (treats them as separate entries)

**Writer**: Biruk530/Biruk Tibebe Solomon

## Sample Usage
```cpp
int arr[] = {86, 74, 11, 99, 57, 6, 61, 73};