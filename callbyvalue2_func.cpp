#include<iostream>
#include<math.h>
using namespace std;

int modify(int a, int b){
    a=a*a;
    b=b*2;
    return a+b;
   
}

int main(){
    int x,y;
    cin>>x>>y;
    int result;
    result=modify(x,y);
    cout<<result<<endl<<x<<" "<<y<<endl;
    return 0;

}
