#include<iostream>
#include<climits>

using namespace std; 

int main(){
    int n, mx=INT_MIN;
    cin>>n;
    int arr[n],sum[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
        sum[i] = max(mx, arr[i]);
        mx= sum[i];
        cout<<sum[i]<<" ";
    }

    return 0;
}