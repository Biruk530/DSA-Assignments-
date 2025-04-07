#include<iostream>
using namespace std;

int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, high, target);
    else
        return binarySearchRecursive(arr, low, mid - 1, target);
}

int main() {
    int arr[] = {2, 4, 7, 10, 13, 18, 21, 25, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 13;

   int resultRec = binarySearchRecursive(arr, 0, n - 1, target);
   if (resultRec != -1)
       cout << "Recursive: Found at index " << resultRec << endl;
   else
       cout << "Recursive: Not found" << endl;

   return 0;
}