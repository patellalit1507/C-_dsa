#include<iostream>
using namespace std;

template<class T>
class algorithm{
    private:
       T a;
       T b;
    public:
      algorithm(T a,T b);
      T add(); 
      T sub();
};
template<class T>
algorithm<T>::algorithm(T a,T b){
    this->a=a;
    this->b=b;
}

template<class T>
T algorithm<T>::add(){
    T c;
    c=a+b;
    return c;
}
template<class T>
T algorithm<T>::sub(){
    T c;
    c=a-b;
    return c;
}

int main(){
    algorithm<float> a1(10,20);
    cout<<a1.add()<<endl;
    cout<<a1.sub()<<endl;
    return 0;
}