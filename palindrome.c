
	#include<stdio.h>
int main()
{
    int x,y=0,n,r;
    printf("Enter the number:\n");
    scanf("%d",&n);
    x=n;
    while(x>0)
    {
        r=x%10;
        y=y*10+r;
        x=x/10;
    }
    if (y==n)
    {
        printf("The number is palindrome");
    }
    else
    printf("The number is not palindrome");
}
