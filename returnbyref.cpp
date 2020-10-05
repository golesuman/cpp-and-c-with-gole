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
	   Demo& sum(Demo &ob2, Demo &ob3)
	   {	
	   ob3.a=a+ob2.a;
	   return ob3;
	   }
	   void print()
	   {
	   	cout<<"The value of a: "<<a<<endl;
	   }
}d1,d2,d3;
int main()
{	
  d1.set(10);
  d2.set(20);
  d3=d1.sum(d2,d3);
  d1.print();
  d2.print();
  d3.print();
  return 0;
}