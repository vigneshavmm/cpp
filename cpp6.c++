#include<iostream>
using namespace std;
class base{
    private:
    int x;
    public :
    base(int a):x(a){
        cout<<"the value of x:"<<x<<endl;
    }
};
class child:public base{
private:
int y;
public:
child(int a, int b):base(a),y(b){
    cout<<"the valus of y:"<<y<<endl;   
}
};
int main(){
    child o(25,50);
    return 0;
}