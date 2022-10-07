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
 unique_ptr <rectangle> r (new rectangle());

    cout<<r->area()<<endl;
    cout<<r->perimeter()<<endl;
    cout<<"adress of r= "<<r.get()<<endl;


    unique_ptr <rectangle> r1(new rectangle());
            r1=move(r);
	cout<<r1->area()<<endl;
    cout<<r1->perimeter()<<endl;

    cout<<"adress of r1= "<<r1.get()<<endl;


}
/****After using the uniqu pointer it is deleting the memory allocated dynamically for the pointer as we can clearly see there is destructor called
after its scope is over*******************/