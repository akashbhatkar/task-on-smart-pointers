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


    rectangle *r1=new rectangle();
    cout<<r1->area()<<endl;
    cout<<r1->perimeter()<<endl;
    cout<<"Adress of r1= "<<r1<<endl;


    rectangle *r2=r1;
    cout<<r2->area()<<endl;
    cout<<r2->perimeter()<<endl;

    cout<<"Adress of r2= "<<r2<<endl;


    rectangle *r3=r2;
    cout<<r3->area()<<endl;
 


}
