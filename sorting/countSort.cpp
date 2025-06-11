#include <iostream>
#include <vector>
#include <algorithm> // for max_element

using namespace std;

void countSort(vector<int>& arr) {
    if (arr.empty()) return;

    int maxVal = *max_element(arr.begin(), arr.end());
    vector<int> count(maxVal + 1, 0);

    // Count frequency
    for (int x : arr) {
        count[x]++;
    }

    // Cumulative count
    for (int i = 1; i <= maxVal; ++i) {
        count[i] += count[i - 1];
    }

    // Sort into output array (stable sort)
    vector<int> output(arr.size());
    for (int i = arr.size() - 1; i >= 0; --i) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy back to original
    arr = output;
}

int main() {
    vector<int> arr = {1, 2, 4, 3, 3, 2, 5, 6};
    countSort(arr);

    for (int x : arr) cout << x << " ";
    cout << endl; // Make sure a newline appears
    return 0;
}
