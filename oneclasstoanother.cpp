#include<iostream>
using namespace std;
class Product{
    int a,b;
    public:
        void getdata(int x,int y)
        {
            a=x;
            b=y;
        }
        
        void show()
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
        int getA()
        {
            return a;
        }
        int getB()
        {
            return b;
        }
};
class Item{
    int r,s;
    public:
        void getdata(int x,int y)
        {
            r=x;
            s=y;
        }
        void show()
        {
            cout<<r<<endl;
            cout<<s<<endl;
        }

        Item()
        {

        }
        Item(Product p)
        {
            r=p.getA();
            s=p.getB();
        }

};
int main()
{
    Product p1;
    Item i1;
    p1.getdata(3,4);
    i1=p1;
    i1.show();
}