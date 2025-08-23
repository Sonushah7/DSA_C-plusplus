#include<iostream>
#include<math.h>
using namespace std;

void mark(int mrk){
    if(mrk>=90){
        cout<<"this is good"<<endl;
    }
    else if (mrk<=89 && mrk>=69)
    {
        cout<<"this is also good"<<endl;
    }
    else{
        cout<<"this is good as well"<<endl;
    }
    
}

int main(){
    int marks,input;
    cout<<"enter your choice {1 or 0}:"<<" "<<endl;
    cin>>input;
    if(input==1){
        cin>>marks;
        mark(marks);

    }
    else{
        cout<<"stop"<<endl;
    }
    return 0;
}