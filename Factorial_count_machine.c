#include <stdio.h>

int main(void) {
  int i=1;
  int m,n;
  printf("Enter the Number :");
  scanf("%d",&n);
  m = n ;
  while (n!=0)
  { i=i*n;
    n--;  
  }
  printf(" Factorial of %d is %d",m,i);
  return 0;
}
