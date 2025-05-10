#include <iostream>
using namespace std;

int BubbleSort(int A[], int size, bool ascending ) {
    int swapCount = 0;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((ascending && A[j] > A[j + 1]) || (!ascending && A[j] < A[j + 1])) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                swapCount++;
            }
        }
    }

    return swapCount;
}

int FindMinimumSwaps(int A[], int size) {
    // Create copies of the original array for ascending and descending sorts
    int B[size], C[size];
    for (int i = 0; i < size; i++) {
        B[i] = A[i];
        C[i] = A[i];
    }

    // Perform ascending and descending sorts and get swap counts
    int ascendingSwaps = BubbleSort(B, size, true);
    int descendingSwaps = BubbleSort(C, size, false);

    // Print sorted arrays for verification (optional)
    cout << "Ascending order sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    cout << "Descending order sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    // Return the minimum of the two swap counts
    return min(ascendingSwaps, descendingSwaps);
}

int main() {
    int A[] = {5, 1, 4, 2, 8};
    int size = sizeof(A) / sizeof(A[0]);

    int minSwaps = FindMinimumSwaps(A, size);
    cout << "Minimum number of swaps: " << minSwaps << endl;

    return 0;
}
