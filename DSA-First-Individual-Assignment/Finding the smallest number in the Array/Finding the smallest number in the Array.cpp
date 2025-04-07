#include <iostream>
using namespace std;
// Finding the smallest number in the given array

int findSmallest(int arr[], int size) {
    int SmallestNumber = arr[0]; // Assumming the first element is the smallest

    for (int i = 1; i < size; i++) {
        if (arr[i] < SmallestNumber) {
            SmallestNumber = arr[i]; // Update minimum if a smallest number is found
        }
    }
    return SmallestNumber;
}
int main() {
    int arr[] = {86, 74, 11, 99, 57, 6, 61, 73}; 
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    int Smallest = findSmallest(arr, size);
    cout << "The Smallest number in the array is: " << Smallest << endl;

    return 0;
}