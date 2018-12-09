#include<stdio.h>

int main()
{   
    int n,i;
    int arr[n];

    scanf("%d",&n);
    while(n--){
    	scanf("%d",&arr[n]);
    }
    int mul=1;
    for(i=0;i<n;i++){
      mul*=arr[i];
    }
    printf("%d",mul);

	
	
	
	return 0;
}