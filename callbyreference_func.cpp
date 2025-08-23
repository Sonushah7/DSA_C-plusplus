/*Write a program using call by reference where a function performs multiple operations on two numbers (e.g., adds them, then modifies one based on the other, etc.). Demonstrate how the original variables are permanently changed after the function call.*/

#include<iostream>
using namespace std;

int operation(int &a,int &b){
    int temp;
    temp=a+b;
    a=b;
    b=temp;
    return a;
    return b;
}

int main(){
    int x,y;
    cin>>x>>y;
    operation(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;

}