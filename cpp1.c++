#include<iostream>
using namespace std;
class student{
    private :
    static int x;
    string name;
    int age;
    public:
    student(string n,int a){
        x++;
        name=n;
        age=a;
    }
    void print(){
    cout<<"name :"<<name<<endl;
    cout<<"age :"<<age<<endl;
    cout<<"\n\n";
    }
     static int getcount(){
        return x;
    }
};
int student::x=0;
int main(){
    student s1("ram",25);
    student s2("raj",24);
    s1.print();
    s2.print();
    cout<<"total student :"<<s1.getcount()<<endl;
    return 0;
}