#include<iostream>
#include <utility>
using namespace std;
void swap(int &&x,int &&y);
int main(){
    int a=100;
    int *p=&a;
    int b=200;
    int *q=&b;
    cout<<"before swap"<<*p<<endl;
    cout<<"before swap"<<*q<<endl;
    swap(*p,*q);
    cout<<"after swap"<<*p<<endl;
    cout<<"after swap"<<*q<<endl;
}

void swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    return;
}
