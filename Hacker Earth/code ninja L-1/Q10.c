#include<stdio.h>
#include<string.h>

int main()
{
    
    int p=0;
    char x[100];
    int Q;
    scanf("%d",&Q);
    while(Q--){
          scanf("%s",&x);
          if((strcmp (x,"p++")==0)||(strcmp (x,"++p")==0)){
              p+=1;
              printf("%d\n",p);
          }
          else if((strcmp (x,"p--")==0)||(strcmp (x,"--p")==0)){
              p-=1;
              printf("%d\n",p);
          }
          else if(strcmp(x,"p=0")==0){
              p=0;
              printf("%d\n",p);

          }

    }





    return 0;
}