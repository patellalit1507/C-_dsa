#include<stdio.h>
#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};

int main(){
    struct rectangle *p;
    // --p=new struct rectangle;
    // we can also use 
    p=(struct rectangle *)malloc(sizeof(struct rectangle));
    p->length=15;
    p->breadth=10;
    cout<<p->length;
    
    return 0;
}