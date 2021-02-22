#include <iostream>
using namespace std;
int main()
{
     int a[20], n = 5, temp[20], i;
     cout << "Enter the numbers:" << endl;
     for (i = 0; i < n; i++)
     {
          cin >> a[i];
     }
     for (i = 0; i < n; i++)
     {
          cout << a[i] << endl;
     }
}