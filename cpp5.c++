#include<iostream>
using namespace std;
class base{
    private:
    int x;
    int y;
    public:
    base(int a, int b):x(a),y(b){
    }
    void print(){
        cout<<"x:"<<x<<endl;
        cout<<"y:"<<y;
    }
};
int main(){
    base o(25,35);
    o.print();
    return 0;
}