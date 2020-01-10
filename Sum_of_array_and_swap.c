// SUM OF ELEMENTS OF AN ARRAY
#include<stdio.h>
void swap (int,int)
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
	void swap(int,int);
{
	  int a,b;
	  a=10;
	  b=20;
	  swap(a,b);
	  printf("a=%d,b=%d\n",a,b);	  return 0;
	}
	void swap(int x,int y) {
  int t=x;
	  x=y;
	  y=t;
	}
