#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n,x=1,y=1,z=1;
  scanf(" %d",&n);
  do{
        ++x,++y,++z;

    }

     while((1/x)+(1/y)+(1/z)==(2/n));
     {

         printf("%d %d %d",x,y,z);
     }




 return 0;
}

