#include <iostream>
using namespace std;
class A
{
 private:
 int a;
public:
 A(int num)
{ 
   a=num;
}
void operator=(A &other)
{
  int t=a;
    a=other.a;
    other.a=t;
    
}
void display(string name)
{
    cout<<"\n"<<name<<".a="<<a<<endl;
}
};
int main() {
    A n1(10);
    A n2(20);
    cout<<"\n Before swapping:";
    n1.display("n1");
    n2.display("n2");
    n1=n2;
    cout<<"\n After swapping:";
    n1.display("n1");
    n2.display("n2");
    
    return 0;
}
