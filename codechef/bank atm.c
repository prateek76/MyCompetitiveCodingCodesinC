#include<stdio.h>
#include<stdlib.h>

int main()
{
    int X;
    float Y;
    float Z=.50;
    scanf("%d %f",&X,&Y);


    if(((float)X>=Y)&&(X>0)&&(X<=2000)){
        printf("%f",Y);
    }
else if((X%5==0)&&(X>0)&&(X<=2000)){
        printf("%.2f",Y-(float)X-Z);
        }
        else{
        	printf("%f",Y);
        }



    return 0;
}
