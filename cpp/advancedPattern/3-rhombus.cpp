// Q. Print the following pattern. 
// n = 5
//     * * * * * 
//    * * * * *
//   * * * * *
//  * * * * *
// * * * * *
#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    for(int i=1; i<=n;i++){
        //for spaces 
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //for stars
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }cout<<endl;
    }

    return 0;
}