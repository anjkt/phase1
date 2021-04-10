#include<iostream>
using namespace std;
int binarySearch(int search, int a[], int n){
    int start = 1;
    int end = n;
    while(start<=end){
        int mid = (start+end)/2;
        if(a[mid]==search){
            return mid;
        }
        if(a[mid]<search){
            start = mid+1;   
        }
        if(a[mid]>search){
            end= mid-1;
        }
    }
    return -1;
}

int main(){

    int n,search;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Item to search:"<<endl;
    cin>>search;
    cout<<"Item Found at : "<<binarySearch(search,arr, n)<<endl;

    return 0;
}