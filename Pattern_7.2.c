#include<stdio.h>
int main()
{
    int i,j,n,p;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(p=n-1;p>=i;p--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d ",i);
        }
        printf("
");
    }
}