#include<stdio.h>
#include<math.h>
int main()
{
    long long int T,X1,X2,Y1,Y2;
    scanf("%lld",&T);
    while(T--){
          scanf("%lld %lld %lld %lld",&X1,&Y1,&X2,&Y2);
          
          
          if((abs(X2-X1) == abs(Y2-Y1))){ //last method was not working slope ==1 why??
              printf("1\n");

          }
          
         
          else if((abs(Y2-Y1)+abs(X2-X1))%2==0){
              printf("2\n");
          } 
          else{
              printf("-1\n");
          }
          
    }




    return 0;
}