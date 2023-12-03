#include<iostream>
#include<array>
using namespace std;
int main(){
    array <int,5> a= {1,2,3,4,5};
    array <int,5> b= {6,7,8,9,0};
    cout<<"array size"<<a.size();
    for(int x : a){
        cout<<" "<<x;
    }
    cout<<endl;
    cout<<"array @3:"<<a.at(3)<<endl;
    cout<<"array empty or not:"<<a.empty()<<endl;
    cout<<"1st element:"<<a.front()<<endl;
    cout<<"nth element:"<<a.back()<<endl;
    a.swap(b);
    for(int x : a){
        cout<<" "<<x;
    }
    for(int x : b){
        cout<<" "<<x;
    }
    array <int,5> c;
    c.fill(199);
    for(int x : c){
        cout<<" "<<x;
    }
    return 0;
}