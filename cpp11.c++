#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char a[6]="R@1a";
    for (int i=0;i<=5;i++){
        if(isalnum(a[i]))
        if(isalpha(a[i]))
        if(isdigit(a[i]))
        if(islower(a[i]))
        if(isupper(a[i]))
        if(isspace(a[i]))
        cout<<a[i]<<endl;
    }
}