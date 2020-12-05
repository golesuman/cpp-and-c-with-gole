#include <iostream>
#include <cstring>
using namespace std;
class Str
{
	private:
		{
			char *name;
			int length;
		}

	public:
	 {
          Str(char *n)
          {
               length = strlen(n);
               name = new char[length + 1];
               strcpy(name, n);
               cout << "the first string is:" << n;
          }
          ~Str()
          {
               delete[] name;
          }
          void display()
          {
               cout << "the 2nd string is:" << name << endl
                    << "Length of string is:"<<length;
          }
     }
};
int main()
{
     char s[50];
     cin >> s;
     Str s1(s);
     s1.display();
}
