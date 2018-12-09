

#include<stdio.h>
#include<stdlib.h>

int main()

{

  float maths;
  float physics;
  float chemistry;
  printf("see your marks");
  printf(
        "\n\n\n\n\n\nenter your marks in maths :: ");

  scanf("%f",&maths);
printf("enter your marks in physics ::");
  scanf("%f",&physics);

 printf("enter your marks in chemistry ::");
  scanf("%f",&chemistry);

  float percentage=(maths + physics + chemistry)/3;
   printf("\n--------------------------------------------------------------------------");
  printf("\nyour aggregate marks is %.2f",percentage);
 printf("\n--------------------------------------------------------------------------");
  if (percentage>90)
   {

    printf("\n--------------------------------------------------------------------------");
      printf("\nyour cgpa is 10.00");
    printf("\n--------------------------------------------------------------------------");
  }
  else if(percentage>80)

 {
      printf("\n--------------------------------------------------------------------------");
      printf("\nyour cgpa is 9.00");
       printf("\n--------------------------------------------------------------------------");
  }
  else if(percentage>70)
     {
          printf("\n--------------------------------------------------------------------------");
      printf("\nyour cgpa is 8.00");
       printf("\n--------------------------------------------------------------------------");
  }
else{ printf("\n--------------------------------------------------------------------------");
        printf("\nyour performance is below average \nwork hard to improve");
 printf("\n--------------------------------------------------------------------------");
}
return 0;
}

