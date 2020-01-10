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

    int p[3],q,sum_array=0;
    printf("Enter an array\n");
    for(int j=0;j<4;j++)
    {
        scanf("%d",&p[j]);
        q=p[j];
        sum_array+=q;
    }
    printf("Sum=%d",sum_array);
}




