#include <iostream>
using namespace std;
int main()
{
     int *p, i;
     p = new int[5];
     cout << "enter the elements:" << endl;
     for (i = 0; i < 5; i++)
     {
          cin >> *(p + i);
     }
     cout << "the elements are:" << endl;
     for (i = 0; i < 5; i++)
     {
          cout << *(p + i) << endl;
     }
     delete[] p;
}