// Q. Print the following pattern. 
// n = 10
// 1 2 3 4 5 6 7 8 9 10
// 1 2 3 4 5 6 7 8 9
// 1 2 3 4 5 6 7 8
// 1 2 3 4 5 6 7
// 1 2 3 4 5 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int count=1;
        for(int j=1;j<=n+1-i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}