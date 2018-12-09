#include<stdio.h>

int main(){
	int T,X,Y,win=1;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&X,&Y);
		if (X==0&&Y==0){
			win=1;
		} else if (X != 0 && Y != 0){
			win=1;
		} else if (X == 0 || Y == 0){
			win=0;
		}
		if (win == 1){
			printf("Aditi\n");
		} else{
			printf("Saumya\n");
		}
	}
}