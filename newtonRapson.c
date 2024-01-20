#include <stdio.h>
#include<math.h>

#define f(x) pow(x,2)-5
#define f1(x) 2*x

float error,x0,x1,fx,fx1;
int i=0;
int main(){
    printf("enter the initial guess\n");
    scanf("%f",&x0);
    printf("enter error\n");
    scanf("%f",&error);
    fx=error;
    while(fabs(fx)>=error){
        i++;
        printf("%d iteration\n",i);
        fx=f(x0);
        fx1=f1(x0);
        x1=x0-(fx/fx1);
        printf("%f+%f/%f\n",x0,fx,fx1);
        printf("x%d==%f\n",i,x1);
        x0=x1;


    }
}