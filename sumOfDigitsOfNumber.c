#include<stdio.h>
int main(void ) {
 int num,sum=0,r;
 printf("Enter number\n");
 scanf("%d", &num);
 while(num!=0)
 {
  r=num%10;
  sum+=r;
  num/=10;
 } 

 printf("sum of digits of %d = %d",num,sum);

  return 0;
}
