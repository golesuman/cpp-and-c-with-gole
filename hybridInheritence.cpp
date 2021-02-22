#include <iostream>
using namespace std;

class A
{
protected:
     int x, y;

public:
     void get_marks(int m1, int m2)
     {
          x = m1;
          y = m2;
     }
     void show_marks()
     {
          cout << "the marks are " << x << " and "
               << y << endl;
     }
};
class B : public A
{
public:
     int sum_marks;
     void sumofmarks()
     {
          sum_marks = x + y;
          cout << "the sum of mark1 and mark2 is " << sum_marks << endl;
     }
};
class C
{
protected:
     int m;

public:
     void get_sports(int s)
     {
          m = s;
     }
     void show_sports()
     {
          cout << "The sports marks is:" << m << endl;
     }
};
class D : public B, public C //D is derived from class B and class C
{
public:
     void total_marks()
     {
          cout << "Total Marks= " << x + y + m;
     }
};

int main()
{
     D d1;
     d1.get_marks(50, 59);
     d1.get_sports(40);
     d1.show_sports();
     d1.show_marks();
     d1.sumofmarks();
     d1.total_marks();
}