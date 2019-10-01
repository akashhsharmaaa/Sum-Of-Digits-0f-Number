#include<stdio.h>
int main(void ) {
 int n=0,sum=0;
 int tem=0;
 printf("Enter number\n");
 scanf("%d", &n);
 tem=n;
for(int i=0;tem>0;i++)
{
  sum=sum+tem%10;
  tem=tem/10;
}
 printf("sum of digits of %d = %d",n,sum);

  return 0;
}
