#include<stdio.h>
int main()
{
	int i,n,count=1;
	printf("Enter the NUmber:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		n=n/10;
		count+=1;
	}
	printf("%d",count);
}
