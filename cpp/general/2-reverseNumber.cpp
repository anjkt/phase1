#include<iostream>
using namespace std;
int main(){
    int n,rev=0;
    cin>>n;
    while(n>0){
        //break and join 
        int last = n%10;
        rev = rev*10 + last;
        n = n/10;
    }
    cout<<rev;
    return 0;
}