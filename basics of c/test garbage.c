#include<stdio.h>
#include<stdlib.h>

int main()

{

  float boardpercentage;
  float jeeadvancescore;
  float mathsscore;
  float physicsscore;
  float chemistryscore;

  printf("\nenter your boardpercentage");
  scanf(" %f",&boardpercentage);

  printf("\nenter your jeeadvancescore");
  scanf(" %f",&jeeadvancescore);

  printf("\nenter your mathsscore");
  scanf(" %f",&mathsscore);

  printf("\nenter your physicsscore");
  scanf(" %f",&physicsscore);

  printf("\nenter your chemistryscore");
  scanf(" %f",&chemistryscore);

  if ((boardpercentage>=75)&&(jeeadvancescore>=66)&&(mathsscore>=6)&&(physicsscore>=6)&&(chemistryscore>=6))
  {
      printf("\n--------------------------------------------------------------------------------------------------------------------------------");
      printf("you are eligible to register");
       printf("\n--------------------------------------------------------------------------------------------------------------------------------");

  }

  return 0;
}
