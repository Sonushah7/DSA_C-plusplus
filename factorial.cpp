#include<iostream>
using namespace std;

int factorial(int a){
    if(a==0 || a==1){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}

int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<"sorry";
    }
    else{
        cout<<factorial(n)<<endl;
    }
    return 0;

}