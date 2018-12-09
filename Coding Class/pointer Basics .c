#include <stdio.h>

int main(){
	int a[]={1,2,3,4,5,6,7,8,9};
	inc_arr(a,9);
	for(int i=0;i<9;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
//function
void inc_arr(int a[],int n){
	for(int i=0;i<n;i++){
		a[i]++;
	}
}