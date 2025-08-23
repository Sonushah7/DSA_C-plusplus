
#include<iostream>
using namespace std;

//void = no return, just do something.
//int (or another type) = function must return a value you can store.

void oddeven(int a){
    if(a%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }

}

int main(){
    int x;
    int result;
    cin>>x;
    oddeven(x);
    cout<<endl;
    return 0;
}