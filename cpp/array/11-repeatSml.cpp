#include<iostream>
#include<climits>
using namespace std;

int main(){
    int MAX_NUM = INT_MAX;
    int n;
    cin>>n;
    int arr[n],idx[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        idx[i] = -1;
    }
    idx[n+1] = -1;



    return 0;
}