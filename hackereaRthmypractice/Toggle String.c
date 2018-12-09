#include<stdio.h>
#include<string.h>

int main()
{
    char string[100];
    scanf("%s",string[100]);
    int i;
    int x=strlen(string[100]);
    for(i=0;i<x;i++){
        string[i]=string[i]+32;
    }
    for(i=0;i<x;i++){
    printf("%s",string[i]);
    }


    return 0;
}
