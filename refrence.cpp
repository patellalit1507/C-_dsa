#include<iostream>
using namespace std;
int main(){
    int a=10;
    int &r=a;
    int b=5;
    cout<<a<<endl;
    r++;
    cout<<r<<endl;
    return 0;
}