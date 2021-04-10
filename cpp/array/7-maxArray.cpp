#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n,maxNumb=INT_MIN;
    cin>>n;
    int arr[n],maxArr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        maxNumb = max(maxNumb,arr[i]);
        maxArr[i] = maxNumb;
    }

    for(int i=0;i<n;i++){
        cout<<maxArr[i]<<" ";
    }
    return 0; 
}