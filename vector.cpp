#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    //Add the element 
    v.push_back(5);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);
    v.push_back(10);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<endl;
    v.insert(v.begin()+3,23);
    v.insert(v.end()-2,25);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
     cout<<endl;
     cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.pop_back();
    v.erase(v.begin()+3);
     cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
     cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    return 0;


}