#include <iostream>
using namespace std;
class A
{
 public:
  int a[5],t;
  void get_data()
{
    int i;
    for(i=0;i<5;i++)
        {
            cout<< "\n Enter the element:";
            cin>>a[i];
        }
    cout<<endl;
}
void swap()
{
    for(int i=0;i<5;i++)
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
}
void display()
{
     for(int i=0;i<5;i++)
         {
             cout<<a[i]<<" ";
         }
     cout<<endl;
}
};
int main() {
    A obj;
    obj.get_data();
    cout<<"\n Before swapping:";
    obj.display();
    cout<<"\n After swapping:";
    obj.swap();
    obj.display();
    
    return 0;
}
