#include<stdio.h>

int main()
{
  int ans = 0;
  int n,arr[100006];
  scanf("%d",&n);
  for (int i = 0; i < n; i++) {
    scanf("%d",&arr[i]);
    ans ^= arr[i];
  }
  printf("%d",ans);
  return 0;
}
