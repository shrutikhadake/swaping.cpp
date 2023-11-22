#include <iostream>
using namespace std;
class A
{
 public:
  int *a,t,size;
  void get_data()
{
    int i;
    cout<<"\n Enter the size of array:";
    cin>>size;
    a=new int[size];
    for(i=0;i<size;i++)
        {
            cout<< "\n Enter the element:";
            cin>>a[i];
        }
    cout<<endl;
}
void swap()
{
    for(int i=0;i<size;i++)
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
}
void display()
{
     for(int i=0;i<size;i++)
         {
             cout<<a[i]<<" ";
         }
     cout<<endl;
}
};
int main() { 
    A obj;
    obj.get_data();
    obj.display();
    obj.swap();
    obj.display();
    
    return 0;
}
