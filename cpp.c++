#include<iostream>
#include<algorithm>
using namespace std;
 bool compare(int i,int j)
 {
    return(j>i);
    
 }
 int main(){
    int data []={7,9,5,4};
    sort(data,data+6,compare);
    for(int i=0;i<3;i++)
    cout<<data[i]<<endl;
 }