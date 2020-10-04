#include<iostream>
using namespace std;
class matrix
{
    private:
        int a[3][3];
    public:
       void getdata(void);
       void putdata(void);
       matrix sum(matrix, matrix);
};
void matrix::getdata(void)
{ 
 for(int i=0;i<3;i++)
  {
  	for(int j=0;j<3;j++)
  	{
  		cin>>a[i][j];
  	}
  }
}
matrix matrix::sum(matrix A, matrix B)
{
	matrix S;
	for(int i=0;i<3;i++)
  {
  	for(int j=0;j<3;j++)
  	{
  		S.a[i][j]=A.a[i][j]+B.a[i][j];
	return S;
  	}
  }
}
void matrix :: putdata(void)
{
for(int i=0;i<3;i++)
  {
  	for(int j=0;j<3;j++)
  	{
  		cout<<a[i][j]<<"\t ";
  	}
  }
}
int main()
{
    matrix m1,m2,m3;
    cout<<"Enter the elements of A:"<<endl;
	m1.getdata();
	cout<<"Enter the elements of B:"<<endl;
	m2.getdata();
	m3=m3.sum(m1,m2);
	cout<<"The element matrix A is:"<<endl;
	m1.putdata();
	cout<<"The elements of matric B is:"<<endl;
	m2.putdata();
	cout<<"Elements of resultant matrix is:"<<endl;
	m3.putdata();
	}