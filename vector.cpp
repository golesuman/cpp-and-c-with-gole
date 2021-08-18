#include<iostream>
using namespace std;
class Vector{
    int a,b;
    public:
        void getData()
        {
            cout<<"Enter a:"<<endl;
            cin>>a;
            cout<<"Enter b:"<<endl;
            cin>>b;
        }
        void showData()
        {
            cout<<"The value of a="<<a<<" and the value of b="<<b<<endl;
        }

        friend Vector operator +(Vector v1,Vector v2);
};

Vector operator +(Vector v1,Vector v2)
{
    Vector temp;
    temp.a=v1.a+v2.a;
    temp.b=v1.b+v2.b;
    return temp;
}

int main()
{
    Vector v1,v2,v3;
    cout<<"Enter v1"<<endl;
    v1.getData();
    cout<<"Enter v2"<<endl;
    v2.getData();
    v3=v1+v2;
    v1.showData();
    v2.showData();
    v3.showData();
}
