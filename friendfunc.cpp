#include<iostream>
using namespace std;
class B;
class A
{  
    int a;
	public:
	  void setvalue(int x)
	  {
	  	a=x;
	  }
	  void putvalue()
	  { 
	      cout<<"The value of a is:" <<a<<endl;
	  }
	  friend display_sum(A,B);
}A1;
class B
{
	int b;
	public:
	   void setvalue(int y)
	  {
	  	b=y;
	  }
	  void putvalue()
	  { 
	      cout<<"The value of b is:" <<b<<endl;
	  }
	  friend display_sum(A,B);
}B1;
void display_sum(A ob1, B ob2)
{ 
   cout<<"The sum of  a and b is:"<<(ob1.a+ob2.b)<<endl;
}
int main()
{
	A1.setvalue(10);
	B1.setvalue(20);
	A1.putvalue();
	B1.putvalue();
	display_sum(A1,B1);
}