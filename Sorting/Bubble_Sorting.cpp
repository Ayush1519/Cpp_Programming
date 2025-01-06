#include <iostream>
using namespace std;
//Printing of the sorted arrays
void SortedArray(int* arr,int size){
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
void BubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                //Swapping of adjacent elemnts
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
}

int main() {
    int arr[] = {5, 4, 1, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    BubbleSort(arr, size);
    SortedArray(arr, size);
    
    
    return 0;
}
