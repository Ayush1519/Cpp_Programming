#include <iostream>
using namespace std;

void sorted_Array(int* arr, int size) {//Sorted array printing
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selection_Sort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {

        int smallest = i;         //

        for (int j = i + 1; j < size; j++) {
            //Check for smallest elements
            if (arr[j] < arr[smallest]) {
                smallest = j;
            }
        }

        if (smallest != i) {
            swap(arr[i], arr[smallest]);
        }
    }
}

int main() {
    int arr[] = {5, 4, 1, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    selection_Sort(arr, size);
    sorted_Array(arr, size);
    
    return 0;
}
