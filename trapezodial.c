#include<stdio.h>
#include<math.h>
#define f(x) 1/(1+x)

int main()
{
 float a, b, f,x,f0,fn,I,h,s=0;
 int i, n;
 printf("Enter lower limit of integration: ");
 scanf("%f", &a);
 printf("Enter upper limit of integration: ");
 scanf("%f", &b);
 printf("Enter number of sub intervals: ");
 scanf("%d", &n);
 h= (b - a)/n;
 f0= f(a) ;
 fn=f(b);
 for(i=1; i<n; i++)
 {
  x = a + i*n;
  f=f(x);
  s=s+f;
  I= ((h/2)*f0+fn+(2*s));
}
 printf("\nRequired value of integration is: %.3f", I);
}