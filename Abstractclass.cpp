#include<iostream>
using namespace std;
class Parent //This is the Abstract class since this class contains at least one pure virtual function it is said to be Abstract class
{
    public:
        virtual void show()=0; //Pure virtual function
};
class Child : public Parent {
    public:
        void show()
        {
            cout<<"This is the class"<<endl;
        }
};
int main()
{
    Parent *p;
    Child c1;
    p=&c1;
    p->show();
}