#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("fileHandling.txt","w+");
    char s[40];
    int i,n;
    printf("Enter the no of students:");
    scanf("%d",&n);
    printf("Enter the name of the students:");
    for(i=0;i<n;i++)
    {
        scanf("%s",&s[i]);
    }
    fprintf(fp,s);
    fclose(fp);


}