#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char n[1000006];
	long int t,i,k,flag = 0;
	scanf("%ld",&t);
	while(t--){
		scanf("%s",n);
		for( i = 0; i < strlen(n)-1; ++i){
			if( ( n[i] == '2' ) && ( n[i+1] == '1') || ( atoi(n)%21 == 0 )){
                flag = 1;
                break;    
			}
		}	
		if(flag == 1)
		    printf("The streak is broken!\n");
		else
		    printf("The streak lives still in our heart!\n");
	}
	return 0;
}