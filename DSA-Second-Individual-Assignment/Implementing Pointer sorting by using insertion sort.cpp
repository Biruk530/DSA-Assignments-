#include <iostream>
using namespace std;

void swap(int* a, int* b) { int temp = *a; *a = *b; *b = temp; }

void insertionSort(int* arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = *(arr + i);
        int* j = arr + i - 1;
        while (j >= arr && *j > key) {
            *(j + 1) = *j;
            j--;
        }
        *(j + 1) = key;
    }
}
int main() {
    const int n = 10;
    int arr[n] = {64, 34, 25, 12, 22, 11, 90, 45, 78, 33};
    int a1[n], a2[n], a3[n];
    
    memcpy(a1, arr, n * sizeof(int));
    memcpy(a2, arr, n * sizeof(int));
    memcpy(a3, arr, n * sizeof(int));

    cout << "Original: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";

    insertionSort(a3, n);
    cout << "Insertion by uing poniter sort: ";
    for (int i = 0; i < n; i++) cout << a3[i] << " ";
    cout << "\n";

    return 0;
}