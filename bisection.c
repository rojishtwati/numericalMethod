/*
Program for bisection method
Author :-ROJISH TWATI

*/

#include<stdio.h>
#include<math.h>


int checkGuess(float x[]);
void display();
float x[4],fx[4],error=0.0001;
int iteration=0;

float equation(float y){
    //return (pow(y,2)-25);
    return(3*y+sin(y)-exp(y));

}



int main(){
    fx[3]=error+1;
    again:
    printf("Enter guess  x1 and x2\n");
    for (int i = 1; i < 3; i++)
    {
        scanf("%f",&x[i]);
    }
    int isTrue=checkGuess(x);
    if(isTrue==1){
         printf("let the initial guess be x1 = %f and x2 a = %f \n ",x[1],x[2]);
         display();
    }
    else{
        printf("the initial guess doesnot bracket the root\n \a");
        goto again;
    }
    

}

int checkGuess(float x[3]){
 for (int i = 1; i < 3; i++)
 {
    fx[i]=equation(x[i]);
 }
 
 if(fx[1]*fx[2]<0){return 1;}
 else{return 0;}
}

void display(){
    printf("iteration(i)|\tx1\t|\tx2\t|\tx3\t|\tfx1\t|\txf2\t|\tfx3     |\n");
    printf("  -----------|----------|---------------|---------------|---------------|---------------|---------------|\n");
    while(fx[3]>error){
        iteration++;
        x[3]=(x[1]+x[2])/2;
        fx[3]=equation(x[3]);
        printf("   %d\t     |%f  | %f      | %f\t| %f\t| %f\t| %f\t|\n",iteration,x[1],x[2],x[3],fx[1],fx[2],fx[3]);
        printf("  -----------|----------|---------------|---------------|---------------|---------------|---------------|\n");
        if(fx[1]*fx[3]<0){
            x[2]=x[3];
            fx[2]=fx[3];
        }
        else{
            x[1]=x[3];
            fx[1]=fx[3];
        }
        if(fx[3]<0){fx[3]=fx[3]*-1;}
    }
    

}
