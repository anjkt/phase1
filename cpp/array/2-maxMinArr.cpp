#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,minNo=INT_MIN,maxNo=INT_MAX;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        minNo= min(minNo,arr[i]);
        maxNo= min(maxNo,arr[i]);
    }
    cout<<"MAX:"<<maxNo<<"MIN:"<<minNo<<endl;
    return 0;
}