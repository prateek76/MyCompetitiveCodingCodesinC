#include<stdio.h>
#include<stdlib.h>

int main()
{
    float score;
    char choice;
    scanf("%c",&choice);
    printf("%c",choice);

    do{
           printf("\nenter your score :: ");
           scanf("%f",&score);
           fflush(stdin);
           printf("do you want to enter again(y/n) :: ");
           scanf("%c",&choice);

      }while(choice=='y'||choice=='Y');

 return 0;
}
