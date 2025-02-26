#include<iostream>
using namespace std;

int KadanesAlgorithm(int nums[],int n){
    

    int maxSubArrSum = nums[0];
    int currSubArrSum  = nums[0];

    for(int i=1;i<n ;i++ ){

        currSubArrSum = max(nums[i], currSubArrSum + nums[i]);
        maxSubArrSum = max(maxSubArrSum , currSubArrSum);
    }
    return maxSubArrSum;
}
int main(){
    int nums[]={1,-3,2,3,-4};
    int n=sizeof(nums)/sizeof(nums[0]);
    int maxSubArray=KadanesAlgorithm(nums,n);
    cout<<maxSubArray<<endl;
}