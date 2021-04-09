// Q. Print the * pattern of hollow rectangle where the number of rows and columns are
// given as input. 
// ==> Input : row=4, col=5
// ==> Output : 
//                 *****
//                 *   *
//                 *   *
//                 *****

#include<iostream>
using namespace std;
int main(){
    int row, col;
    cin>>row>>col;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}