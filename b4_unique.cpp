#include <iostream>
#include<memory>
using namespace std;

class rectangle
{
    int l,b;
public: rectangle()
    {
        cout<<"Enter the length and breadth "<<endl;
        cin>>l>>b;
    }

    int area()
    {
        cout<<"Area= ";
       return l*b;
    }

    int perimeter()
    {
        cout<<"Perimeter= ";
        return 2*(l+b);
    }
    ~rectangle()
    {
        cout<<"destructor"<<endl;
    }
};

int main()
{
   
   rectangle *r=new rectangle();
    cout<<r->area()<<endl;
    cout<<r->perimeter()<<endl;
    cout<<"adress of r"<<r<<endl;

    rectangle *r1=r;
    cout<<r1->area()<<endl;
    cout<<r1->perimeter()<<endl;

    cout<<"adress of r1"<<r1<<endl;

}
/********* In the above example dynamically created memory is not destroyed as we can see in the output that 
afer completion of the program destructor is not called ***************************/