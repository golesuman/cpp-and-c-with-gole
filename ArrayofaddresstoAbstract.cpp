#include<iostream>
using namespace std;
class Parent
{

    public:
        virtual void show()=0;

};
class der1 : public Parent
{
    public:
        void show()
        {
            cout<<"This is der1"<<endl;
        }
};
class der2 : public Parent{
    public:
        void show()
        {
            cout<<"This is class der2"<<endl;
        }
};
class der3 : public Parent{
    public:
        void show()
        {
            cout<<"This is class der3"<<endl;
        }
};
class der4 : public Parent
{
    public:
        void show()
        {
            cout<<"This is class der4"<<endl;
        }

};
int main()
{
    der1 d1;
    der2 d2;
    der3 d3;
    der4 d4;
    Parent *p[]={&d1,&d2,&d3,&d4};
    int i;
    for(i=0;i<sizeof(p);i++)
    {
        p[i]->show();
    }

}