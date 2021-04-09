// Q. Print a digit Triangle pattern as following. For n=4
// Result
// 1
// 22
// 333
// 4444

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        //stars
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }    return 0;
}