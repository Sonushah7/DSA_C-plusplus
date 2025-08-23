#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, vector<int>& left, vector<int>& right) {
    int i = 0, j = 0, k = 0;

    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    while (i < left.size())
        arr[k++] = left[i++];
    while (j < right.size())
        arr[k++] = right[j++];
}

void mergesort(vector<int>& arr) {
    int size = arr.size();
    if (size <= 1)
        return;

    int mid = size / 2;
    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());

    mergesort(left);
    mergesort(right);
    merge(arr, left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergesort(arr);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
