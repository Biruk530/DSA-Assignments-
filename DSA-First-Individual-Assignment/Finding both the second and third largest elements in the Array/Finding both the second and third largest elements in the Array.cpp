#include <iostream>
using namespace std;

// First creat a function that find the largest number
int findLargest(int arr[], int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

// Creat a function that find the second largest number
int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        return -1;
    }
    
    int largest = arr[0];
    int secondLargest = arr[0];
    
    // First: find largest
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    // Second: find second largest
    secondLargest = -1; // Assumming negative numbers are not in array
    for (int i = 0; i < size; i++) {
        if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

// Creat a function that find the third largest number
int findThirdLargest(int arr[], int size) {
    if (size < 3) {
        return -1;
    }
    
    int first = arr[0];
    int second = -1;
    int third = -1;
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] < first) {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] < second) {
            third = arr[i];
        }
    }
    return third;
}

int main() {
    int arr[] = {86, 74, 11, 99, 57, 6, 61, 73};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);
    int thirdLargest = findThirdLargest(arr, size);

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    if (secondLargest != -1) {
        cout << "The Second Largest number in the array is: " << secondLargest << endl;
    } else {
        cout << "Second largest number doesn't exist" << endl;
    }

    if (thirdLargest != -1) {
        cout << "The Third Largest number in the array is: " << thirdLargest << endl;
    } else {
        cout << "Third largest number doesn't exist" << endl;
    }

    return 0;
}