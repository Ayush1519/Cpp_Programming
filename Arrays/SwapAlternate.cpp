#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[]={2,5,7,4,3,9,8,6};
    int odd[]={3,5,7,6,8,7,9};
    swapAlternate(even,8);
    printArray(even,8);

    swapAlternate(odd,7);
    printArray(odd,7);
}