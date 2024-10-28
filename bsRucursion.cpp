#include<iostream>
using std::cout;
using std::endl;

int bsRucursion(int *arr,int start,int end,int target){
    while(start<=end){
        int mid=start+(end-start)/2;

        if(arr[mid]==target)return mid;

        if(arr[mid]<target){
            return bsRucursion(arr,mid+1,end,target);
        }else{
            return bsRucursion(arr,start,mid-1,target);
        }
    }
    return -1;
}

int main(){

    int arr[]={1,2,4,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"target found at index:"<<bsRucursion(arr,0,n-1,target);
    return 0;
}