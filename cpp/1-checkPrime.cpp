#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    bool flag = 0;
    cout<<"Enter the NUMBER:"<<endl;
    cin>>n;
    //logic - If a number is prime it will divisible by itself or 1. 
    for(int i=2; i<n;i++){
        if(n%i == 0){
            cout<<"Not a prime"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"Prime Number"<<endl;
    }
     //logic - If a number is prime it will divisible by itself or 1 -optimized. 
    for(int i=2; i<=sqrt(n);i++){
        if(n%i == 0){
            cout<<"Not a prime"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"Prime Number"<<endl;
    }
    return 0; 
}