#include<iostream>
using namespace std;
inline int cube(int x){
    int result=x*x*x;
    return result;
}
int main(){
    int x=2;
    cout<<"cube is:"<<cube(x);
    return 0;
}