#include<stdio.h>
#include<stdlib.h>

int main()

{

  float boardpercentage;
  float jeeadvancescore;
  float mathsscore;
  float physicsscore;
  float chemistryscore;
  float check;

  printf("\n\t\t\tenter your boardpercentage :: ");
  scanf(" %f",&boardpercentage);

  printf("\n\t\t\tenter your jeeadvancescore :: ");
  scanf(" %f",&jeeadvancescore);

  printf("\n\t\t\tenter your mathsscore :: ");
  scanf(" %f",&mathsscore);

  printf("\n\t\t\tenter your physicsscore :: ");
  scanf(" %f",&physicsscore);

  printf("\n\t\t\tenter your chemistryscore :: ");
  scanf(" %f",&chemistryscore);

  check=(physicsscore+chemistryscore+mathsscore);

  if ((boardpercentage>=75)&&(jeeadvancescore>=66)&&(mathsscore>=6)&&(physicsscore>=6)&&(chemistryscore>=6)&&(check==jeeadvancescore))
  {
      printf("\n-------------------------------------------------------------------------------------------------------\n");
      printf("\t\t\tyou are eligible to register");
       printf("\n------------------------------------------------------------------------------------------------------\n");
}  else if((check!=jeeadvancescore)&&(mathsscore>122)&&(physicsscore>122)&&(chemistryscore>122)&&(jeeadvancescore>366)&&(check!=jeeadvancescore)){
    printf("\t\tenter data correctly");
  }


  else {
        printf("\n-------------------------------------------------------------------------------------------------------\n");
        printf("\t\t\tyou are not eligible lol lol");}
        printf("\n-------------------------------------------------------------------------------------------------------\n");

  return 0;
}
