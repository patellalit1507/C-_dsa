#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    // int a=12;
    // int *p;
    // p=&a;

    // ---example 2 ---pointer__array

    // int a[5]={1,2,3,4,5};
    // int *p;
    // p=a;
    // for(int i=0;i<5;i++){
    //     // cout<<a[i]<<endl;
        
    //     cout<<p[i] <<endl;

    // }
  

//   ----example3 pointer__heap
    int *p;
    p=new int[5];
    p[0]=10;p[1]=15;p[2]=3;p[3]=4;p[4]=10;
    for(int i=0;i<5;i++){
         cout<<p[i]<<endl;

     }
    delete [ ] p;
    return 0;
}