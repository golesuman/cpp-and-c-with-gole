#include<iostream>
using namespace std;
class time
{
	private:
	  int hr,min;
 public:
   void gettime(int, int);
   void puttime(void);
   void sumtime(time, time);
   
}t1,t2,t3;
void time ::gettime(int x, int y)
{
	hr=x;
	min=y;
}
void time :: puttime(void)
{
	cout<<"time in hour is:"<<hr<<endl;
	cout<<"time in min is:"<<min<<endl;
}
void time :: sumtime(time,time)
{
	min=t1.min+t2.min;
	hr=min/60;
	min=min%60;
	hr=hr+t1.hr+t2.hr;
}
int main()
{
	t1.gettime(3,30);
	t2.gettime(4,50);
	t3.sumtime(t1,t2);
	t1.puttime();
	t2.puttime();
	t3.puttime();
	return 0;
}