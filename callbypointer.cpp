#include<iostream>
using namespace std;
class Demo
{
    private:
         int a;
    public:
         void set(int x)
         { 
             a=x;
        }

    void sum(Demo *ob1, Demo *ob2)
    {
        ob1->a=ob1->a-1;
        a=ob1->a+ob2->a;
    }
    
        void print()
    {
       std::cout<<"Value of A is: "<<a<<endl;
    }
}d1,d2,d3;

int main()
{
    d1.set(10);
    d2.set(20);
    d3.sum(&d1,&d2);
    d1.print();
    d2.print();
    d3.print();
}