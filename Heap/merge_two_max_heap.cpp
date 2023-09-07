
#include <iostream>
using namespace std;

// Heapify algorithm to maintain max heap property
void heapify(int arr[], int n, int i) {

    //0 base indexing
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest]) {
        largest = l;
    }

    if (r < n && arr[r] > arr[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Merge two binary max heaps represented as arrays
int* merge(int heap1[], int size1, int heap2[], int size2) {
    int* mergedHeap = new int[size1 + size2];

    // Copy elements of the first heap
    for (int i = 0; i < size1; i++) {
        mergedHeap[i] = heap1[i];
    }

    // Copy elements of the second heap
    for (int i = 0; i < size2; i++) {
        mergedHeap[size1 + i] = heap2[i];
    }

    // Build a new max heap from the merged array
    for (int i = (size1 + size2) / 2 - 1; i >= 0; i--) {
        heapify(mergedHeap, size1 + size2, i);
    }

    return mergedHeap;
}

int main() {
    int heap1[] = {10, 5, 3, 2, 4};
    int size1 = sizeof(heap1) / sizeof(heap1[0]);

    int heap2[] = {15, 12, 7, 6, 9, 11};
    int size2 = sizeof(heap2) / sizeof(heap2[0]);

    int* mergedHeap = merge(heap1, size1, heap2, size2);

    // Print the merged heap
    cout<<"Merged head: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << mergedHeap[i] << " ";
    }
    cout << endl;

    delete[] mergedHeap;
    return 0;
}
