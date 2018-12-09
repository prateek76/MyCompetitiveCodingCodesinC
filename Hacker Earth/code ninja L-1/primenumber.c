//partially accepted [tle]

#include<stdio.h>

int main()
{
    int N,i,j,n,flag=0,count=1;
    while(scanf("%d",&N)!=EOF)
    {if(N==1){
        printf("%d\n",0);
    }
    else{
        for(i=3;i<=N;i++){
            for(j=2;j<i;j++){
                if(i%j == 0){
                    flag=0;
                    break;
                    } else{
                        flag = 1;
                    }    
            }
            if(flag == 1){
                count++;
                flag=0;
            }
        }
     printf("%d\n",count);
     count = 1;   
    } 
    }
    return 0;
}