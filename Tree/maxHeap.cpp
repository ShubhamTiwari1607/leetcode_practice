#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void heapify(vector<int> &arr, int i)
{
    int size = arr.size();
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && arr[left] > arr[largest])
    {
        largest = left;
    }

    if (right < size && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, largest);
    }
}

void buildMaxheap(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, i);
    }
}

int main()
{
    vector<int> arr = {10, 4, 2, 3, 5, 6, 9, 7, 1, 8};
    buildMaxheap(arr);

    for (auto it = arr.begin(); it != arr.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
