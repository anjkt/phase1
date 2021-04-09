// Q. Print the following pattern. 
// n = 10
//          1 
//         1 2
//        1 2 3
//       1 2 3 4
//      1 2 3 4 5
//     1 2 3 4 5 6
//    1 2 3 4 5 6 7
//   1 2 3 4 5 6 7 8 
//  1 2 3 4 5 6 7 8 9
// 1 2 3 4 5 6 7 8 9 10
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //for spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}