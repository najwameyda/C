#include <iostream>
using namespace std;

void selectionSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[minIndex]) {  // Membandingkan elemen untuk urutan menurun
                minIndex = j;
            }
        }
        // Menukar elemen minimum dengan elemen di posisi i
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int A[] = {2, 2, 1, 3, 6, 5, 3, 3, 4, 1, 4, 1, 5, 1, 7, 5, 2, 2, 0, 2, 5, 7, 7, 7, 5, 0, 5};
    int n = sizeof(A) / sizeof(A[0]);

    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    selectionSortDescending(A, n);

    cout << "Array hasil akhir dari proses sorting: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

