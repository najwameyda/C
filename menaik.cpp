#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int maxIndex = 0;
        for (int j = 1; j <= i; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        // Swap(tuker posisi) dari elemen terbesar yang ditemui di elemen di posisi terakhir yang belum diurutkan
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

int main() {
    int A[] = {12, 15, 7, 10, 25, 2, 17, 25, 5, 20};
    int n = sizeof(A) / sizeof(A[0]);

    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    selectionSort(A, n);

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

