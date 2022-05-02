#include<stdio.h>
void patternPrint(int num)
{
int p=1,i,j;
for(i=0;i<num;i++)
{
    for(j=0;j<=i;j++)
    {
        printf("%d",p);
    }
    printf("\n");
}
}
void main()
{
    int num=4;
    patternPrint(num);
}