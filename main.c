#include <stdio.h>
int main(void) 
{
 int i,n1,n2,n3,n4,check;
 for(i=0;i <= 9999 ;i++){
  n1=i%10;
  n2=(i/10)%10;
  n3=(i/100)%10;
  n4=(i/1000)%10;
  check =(n1*n1*n1*n1)+(n2*n2*n2*n2)+(n3*n3*n3*n3)+(n4*n4*n4*n4);
  if(check == i)
    printf(" Number exponents 4 equal itself:%d \n",i);
    }
  return 0;
}
