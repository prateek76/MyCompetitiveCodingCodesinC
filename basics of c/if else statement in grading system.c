
#include<stdio.h>
#include<stdlib.h>

int main()

{

  float maths;
  float physics;
  float chemistry;

  printf(
        "enter your marks in maths\n");

  scanf(" %f",maths);

   printf("enter your marks in physics\n");

  scanf(" %f",physics);
  printf("enter your marks in chemistry\n");
  scanf(" %f",chemistry);

  float percentage=(maths + physics + chemistry)/3;
  printf("your aggregate marks is %f",percentage);

  if (percentage>90)
  {
      printf("your cgpa is 10.00");
  }
  else if(percentage>80)

 {
      printf("your cgpa is 9.00");
  }
  else if(percentage>70)
     {
      printf("your cgpa is 8.00");
  }
else{printf("your performance is below average");


}



return 0;













}

