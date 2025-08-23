#include<iostream>
using namespace std;
int main(){
    int n,reverse=0;
    cin>>n;
    while (n>0) {
        int m=n%10;
        n=n/10;
        reverse=reverse*10+m;
    
    }
    cout<<reverse<<endl;
    return 0;
}