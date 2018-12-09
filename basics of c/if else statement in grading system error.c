
#include<stdio.h>
#include<stdlib.h>

int main()

{

  float maths;
  float physics;
  float chemistry;

  printf(
        "enter your marks in maths\n");

  scanf("\n %f",&maths);
printf("enter your marks in physics\n");
  scanf(" \n %f",&physics);

 printf("enter your marks in chemistry\n");
  scanf("\n %f",&chemistry);

  float percentage=(maths + physics + chemistry)/3;
  printf("your aggregate marks is %f",percentage);

  if (percentage>90)
  {
      printf("\nyour cgpa is 10.00");
  }
  else if(percentage>80)

 {
      printf("\nyour cgpa is 9.00");
  }
  else if(percentage>70)
     {
      printf("\nyour cgpa is 8.00");
  }
else{printf("\nyour performance is below average \nwork hard");


}



return 0;













}

