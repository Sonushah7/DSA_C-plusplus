#include<iostream>
using namespace std;
int main(){
    string name="sanu";
    int code=-1;
    if(name=="sonu") {
        code=1; }
    else if (name=="sanjiv") {
        code =2; }
    else if(name=="sanu") {
        code =3; }
    switch (code) {
        case 1:
        cout<<"my name,"<<" ";
        break;
        case 2:
        cout<<"my randi roommate,"<<" ";
        break;
        case 3:
        cout<<"my fav person,"<<" ";
        break;
        default:
        cout<<"person missing,"<<" ";
    }
    cout<< name<<" I love you"<<endl;
    return 0;
}