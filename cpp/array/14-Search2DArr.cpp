#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    arr[0][0] = 28;
    arr[0][1] = 94;
    arr[0][2] = 12;
    arr[1][0] = 35;
    arr[1][1] = 16;
    arr[1][2] = 82;
    arr[2][0] = 62;
    arr[2][1] = 77;
    arr[2][2] = 5;
    
    int x,f=0;
    cin>>x;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if(arr[i][j] == x){
                f = 1;
                cout<<"Found at "<<i<<","<<j;
            }
        }
    }
    if(f == 0){
        cout<<"Not found";
    }


    return 0;
}