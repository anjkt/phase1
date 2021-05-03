#include<iostream>
using namespace std;

int main(){
    int n, flag =0, left =0;
    cin>>n;
    int right = n;
    char arr[n+1];
    cin>>arr;
    while(left<right){
        if(arr[left] == arr[right]){
            left++;
            right--;
            break;
        }
        
    }

    if(flag == 0){
        cout<<"Is Palindrome";
    }else{
        cout<<"No";
    }
    return 0;
}