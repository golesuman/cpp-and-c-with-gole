#include <iostream>
using namespace std;
class A
{
protected:
     int x;

public:
     void getnum(int n1)
     {
          x = n1;
     }
     void showNum1()
     {
          cout << "The number is " << x << endl;
     }
};
class B : public A
{
protected:
     int y;

public:
     void getnum2(int n2)
     {
          y = n2;
     }
     void showNum2()
     {
          cout << "The second number is " << y << endl;
     }
};
class P
{
protected:
     int z;

public:
     void getnum3(int n3)
     {
          z = n3;
     }
     void shownum3()
     {
          cout << "The 3rd number is " << z << endl;
     }
};
class D : public B, public P
{
private:
     int sum;

public:
     void getsum()
     {
          sum = x + y + z;
     }
     void showsum()
     {
          cout << "The sum of three numbers is " << sum << endl;
     }
};
int main()
{
     D d1;
     d1.getnum(30);
     d1.getnum2(50);
     d1.getnum3(45);

     d1.showNum1();
     d1.showNum2();
     d1.shownum3();
     d1.getsum();
     d1.showsum();
}