#include<stdio.h>


int main()
{
	long int n,i,count=0;
	long int arr[100009];
    scanf("%ld",&n);
    for(i=0;i<n;i++){
    	if (arr[i+1]>arr[i])
    	{
    		count++;
    	}
        
    }




	return 0;
}