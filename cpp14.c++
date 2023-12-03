#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream o("test.txt",ios::trunc);
    o<<"vignesh swaminathan"<<endl;
    o<<"vadamathimangalam"<<endl;
    o<<"it is macbook";
    o.close();
    return 0;
}