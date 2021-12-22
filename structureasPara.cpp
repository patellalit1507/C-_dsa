#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};
int area(struct Rectangle *p){
    p->breadth=7;
    return p->breadth*p->length; 
}
int main(){
    struct Rectangle r={10,5};
    int k=area(&r);
    cout<<r.length<<" "<<r.breadth<<endl;
    cout<<k<<endl;
    return 0;
}