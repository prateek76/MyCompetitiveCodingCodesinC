#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%s",str);
    
    int i,k,flag=0;
    k=strlen(str);

    for(i=0;i<k;i++)
    {
        if(str[i]==str[k-i]){
            flag=1;
        }
    }
    if(flag==1){
        printf("YES");
    }
    else{
        printf("NO");
    }





    return 0;
}