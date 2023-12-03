#include<iostream>
using namespace std;
class base{
    private:
    char x;
    public:
    base(int a):x(a){
        cout<<"x:"<<(int)x<<endl;
    }
};
int main(){
    base o(40);
    return 0;
}