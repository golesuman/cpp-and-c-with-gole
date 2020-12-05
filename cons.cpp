#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		complex(int x, int y)
		{
			a=x;
			b=y;
			cout<<'a:'<<a<<'b :'<<b;	
		}
};
int main()
{
	complex c1=complex(5,10);
}
