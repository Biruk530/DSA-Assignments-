#include <iostream>
using namespace std;

void swap(int* a, int* b) { int temp = *a; *a = *b; *b = temp; }

void bubbleSort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (*(arr + j) > *(arr + j + 1)) swap(arr + j, arr + j + 1);
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

    bubbleSort(a1, n);
    cout << "Bubble by uing poniter sort:   ";
    for (int i = 0; i < n; i++) cout << a1[i] << " ";
    cout << "\n";

    return 0;
}