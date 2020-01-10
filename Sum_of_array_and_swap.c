// SUM OF ELEMENTS OF AN ARRAY
#include<stdio.h>
int main()
{
    int a[5],i,sum=0,x;
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
        x=a[i];
        sum=sum+x;
    }
    printf("Sum of element of given array=%d\n",sum);

}
