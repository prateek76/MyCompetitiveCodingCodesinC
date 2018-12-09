#include<stdio.h>

int main()
{
  int N,B,Q,arr[100006];
  a = (int*)calloc(100006, sizeof(int));
  scanf("%d",&N);
  for (int i = 0; i < N; i++)
  {
    scanf("%d",&arr[i]);
    a[arr[i]]++;
  }
  scanf("%d",&Q);
  while (Q--)
  {
    scanf("%d",&B);
    if(a[B] == 0)
    {
      printf("NOT PRESENT\n");
    }
    else{
      printf("%d\n",a[B]);
    }
  }
  return 0;
}
