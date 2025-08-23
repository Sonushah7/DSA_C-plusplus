#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"inside function"<<" ";
    cout<<a<<" "<<b<<endl;
}

int main(){
    int x,y;
    cin>>x>>y;
    swap(x,y);
    cout<<"inside main"<<" ";
    cout<<x<<" "<<y<<endl;
    return 0;
}