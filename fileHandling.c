#include<stdio.h>
struct student
{
    int roll;
    char name[30];
};
int main()
{
    struct student st;
    int i,n;
    FILE *fp;
    fp=fopen("stud.txt","w+");
    printf("how many students:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the roll and name of student %d",i+1);
        scanf("%d%s",&st.roll,&st.name[i]);
        fprintf(fp,"%d\t%s",st.roll,st.name[i]);
    }

    fclose(fp);
}