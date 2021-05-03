#include<iostream>
using namespace std;
int main(){
    int inp, n,cube=0;
    cin>>inp;
    n= inp;
    while(n>0){
        int last = n%10;
        cube = cube+ last*last*last;
        n = n/10;
    }

    if(cube == inp){
        cout<<"ARMSTRONG"<<endl;
    }else{
        cout<<"Not an ArmStrong"<<endl;
    }
    return 0;
}