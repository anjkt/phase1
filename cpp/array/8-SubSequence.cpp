#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;//5
    int arr[n];

    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int curr = 0;
    for(int i=0; i<n-1;i++){
        curr = 0;
        for(int j=i; j<n-1; j++){
            curr += arr[j];
            cout<<curr<<" ";
        }
    }
    return 0;
}