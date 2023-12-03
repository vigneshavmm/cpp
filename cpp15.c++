#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string myText;
    ifstream MyreadFile("test.txt");
    while(getline(MyreadFile,myText)){
        cout<<myText;
    }
    return 0;
}