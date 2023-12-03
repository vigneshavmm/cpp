#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    cout<"capacity:"<<a.capacity()<<endl;
    a.push_back(10);

    cout<"capacity:"<<a.capacity()<<endl;
    return 0;
}