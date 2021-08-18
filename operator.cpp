#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        Complex add(Complex c)
        {
            Complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
        void showData()
        {
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
        }
};
int main()
{
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    c3=c1.add(c2);
    c3.showData();
    c1.showData();
}