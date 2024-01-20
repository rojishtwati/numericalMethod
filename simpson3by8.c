#include<stdio.h>
#include<math.h>
#define f(x) 1/(1+(x))

int main()
{
 float a, b, I,f,x,f0,fn,h, s1=0, s2=0;
 int i, n;
 printf("Enter lower limit of integration: ");
 scanf("%f", &a);
 printf("Enter upper limit of integration: ");
 scanf("%f", &b);
 printf("Enter number of sub intervals: ");
 scanf("%d", &n);
 
 h = (b - a)/n;
 f0=f(a);
 fn=f(b);
 for(i=1; i<n; i++)
 {
  x = a + i*n;
  if(i%3==0)
  {
   f=f(x);
   s1=s1+f;
  }
  else
  {
   f=f(x);
   s2= s2 + f;
  }
  I=(((3*h)/8)*(f0+fn+(3*s1)+(4*s2)));
 }
 
 printf("\nRequired value of integration is: %3f", I);
}