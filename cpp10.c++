#include<iostream>
#define PI 3.14
#define rectangle(length,breadth)(length * breadth)
#define createString(s) #s
#define concat(a,b) a ## b
using namespace std;
int main(){
    cout<<"area of circle:"<<PI*5*5<<endl;
    int length=9,breadth=8,area;
    area=rectangle(length,breadth);
    cout<<"area of the rectangle:"<<area<<endl;
    cout<<"new string:"<<createString(vignesh)<<endl;
    int ab=100;
    cout<<"the value of AB:"<<concat(a,b);
    cout<<"line:"<<__LINE__<<endl;
     cout<<"file:"<<__FILE__<<endl;
      cout<<"date:"<<__DATE__<<endl;
       cout<<"time:"<<__TIME__<<endl;
        cout<<"--cpp:"<<__cplusplus<<endl;
    return 0;
}