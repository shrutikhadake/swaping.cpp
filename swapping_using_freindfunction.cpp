#include <iostream>
using namespace std;
class A
{
 private:
 int a,b;
public:
 void get_data()
{ 
    cout<<"\n Enter two nos:";
    cin>>a>>b;
}
void swap()
{
  int t=a;
    a=b;
    b=t;
    
}
friend void display(A obj);
};
void display(A obj)
{
    cout<<"\n a="<<obj.a<<" b="<<obj.b;
}
int main() {
    A obj;
    obj.get_data();
    cout<<"\n Before swapping:";
    display(obj);
    obj.swap();
    cout<<"\n After swapping:";
    display(obj);
    
    return 0;
}
