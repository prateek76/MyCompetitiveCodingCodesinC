#include<stdio.h>

 int main()
 {
 	int N,M,i,j,swapped,temp,l;
 	int arr[1000006][1000006];
 	int arr1[1000006];
 	scanf("%d %d",&N,&M);
 	for ( i = 0; i < N; ++i){
 		for ( j = 0; j < M; ++j){
 			scanf("%d",&(arr[i][j]));
 		}
 	}

 	while(1){
 		swapped = 0;
 		for ( i = 0; i < N; ++i){
 			for ( j = 0; j < M-1; ++j){
 				if (arr[i][j] < arr[i][j+1]){
 					temp = arr[i][j];
 					arr[i][j] = arr[i][j+1];
 					arr[i][j+1] = temp;
 					swapped = 1;
 				}
 			}	
 		}
 		if (swapped == 0){
 					break;
 				}
 	}

 	for ( i = 0; i < N; ++i){
 		arr[i][0] = arr1[i];
 	}
 	while(1){
 		swapped = 0;
 		for ( i = 0; i < N; ++i){
 				if (arr1[i] < arr1[i+1]){
 					temp = arr1[i];
 					arr1[i] = arr1[i+1];
 					arr1[i+1] = temp;
 					swapped = 1;
 			}	
 		}
 		if (swapped == 0){
 					break;
 				}
 	}
 	l = arr1[0] - arr1[1];
 	printf("%d",l);
 	

 	return 0;
 }