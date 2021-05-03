#include<iostream>
using namespace std;

int main(){
    int arr[5][3];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;

    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;

    arr[2][0] = 7;
    arr[2][1] = 8;
    arr[2][2] = 9;

    arr[3][0] = 10;
    arr[3][1] = 11;
    arr[3][2] = 12;

    arr[4][0] = 13;
    arr[4][1] = 14;
    arr[4][2] = 15;

    int row_start = 0,row_end=4,col_start=0,col_end=2;

    while( row_start<=row_end && col_start<=col_end ){

        for(int col = col_start; col <= col_end; col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        for(int row = row_start; row <= row_end; row++){
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;

        for(int col=col_end; col >= col_start; col--){
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        for(int row = row_end; row >= row_start; row--){
            cout<<arr[row][col_start]<<" ";
        }
        col_start++;

    }
    return 0;
}