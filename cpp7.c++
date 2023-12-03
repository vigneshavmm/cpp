#include<iostream>
using namespace std;
class base{
    private:
    const int x;
    public:
    base(int a):x(a){
        cout<<"the value of x:"<<x<<endl;
    }
};
class student{
    private:
    string name;
    int age;
    public:
    student(string n,int a){
        name=n;
        age=a;
    }
    void print(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
    }
};
int main(){
    base o(50);
    student n("ram",20);
    n.print();
    return 0;
}