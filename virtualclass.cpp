#include <iostream>
using namespace std;
class A
{
public:
     void show()
     {
          cout << "This is class A" << endl;
     }
};
class B : public virtual A
{
public:
     void showB()
     {
          cout << "this is class B" << endl;
     }
};
class C : public virtual A
{
public:
     void showC()
     {
          cout << "this is class C" << endl;
     }
};
class D : public B, public C
{
public:
     void showD()
     {
          cout << "this is class D" << endl;
     }
};
int main()
{
     D d;
     d.show();
}