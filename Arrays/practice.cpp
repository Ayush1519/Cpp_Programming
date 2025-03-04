#include<iostream>
using namespace std;

int main(){
    //Declaration of an array
    int arr[]={1,1,6,7,8,9};
    int n = 6; // Size of the array
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            arr[i]=arr[i]*2;
            arr[i+1]=0;
        }
    }

    // Move non-zero elements to the front
    int j = 0; // Index to place non-zero elements
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j++] = arr[i];
        }
    }

    // Fill the remaining positions with zeros
    while(j<n){
        arr[j++] = 0;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
