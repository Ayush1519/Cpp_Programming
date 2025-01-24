#include<iostream>
using namespace std;
void print(int *ptr){
    cout<<*ptr<<endl;
}
void update(int *ptr){

    //ptr=ptr + 1;//nO change in ptr
    //cout<<"Inside update:"<<ptr<<endl;
    *ptr = *ptr+1;//change in value 

}
int getSum(int arr[],int n){//Here arr is passed as a pointer
    int sum=0;
    for(int i=0;i<n;i++){
        sum =sum+arr[i];
    }
    return sum;
}
int main(){
    /*int value = 7;
    int *ptr = &value;

    cout<<"Before:"<<*ptr<<endl;
    update(ptr);
    cout<<"After:"<<*ptr<<endl;

    print(ptr);*/

    int arr[5]={1,2,3,4,5};
    cout<<"Sum is:"<<getSum(arr,5)<<endl;
    return 0;
}