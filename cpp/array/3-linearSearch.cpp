#include<iostream>
using namespace std;
int linearSearch(int search, int a[], int n){
    for(int i=0; i<n;i++){
        if(a[i] == search){
            return i;
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
    cout<<"Item Found at : "<<linearSearch(search,arr, n)<<endl;

    return 0;
}