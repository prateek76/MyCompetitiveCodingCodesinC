#include<stdio.h>

int main()
{
  int T,Z,N;
  int arr[1009];
  scanf("%d",&T);
  while (T--) {
    scanf("%d %d",&Z,&N);
    for (int i = 0; i < N; i++) {
      scanf("%d",&arr[i]);
      Z &= arr[i];
    }
    if (Z == 0) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  }
  return 0;
}
