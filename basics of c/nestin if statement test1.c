#include<stdio.h>
#include<stdlib.h>

int main()
{

 int age;
 char gender;

 printf("enter your age now");
 scanf(" %d",&age);

 printf("enter your correct gender (m/f)\n");

 scanf(" %c",&gender
       );

  if(age>=18)
  {
      printf("enter the site");


if(gender=='m'){
    printf("dude");
}

if(gender=='f'){
    printf("girl");}

  }
if(age<18){
    printf("get ur ass kicked");
}


return 0;
}
