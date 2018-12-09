#include<stdio.h>

int main()
{
  int N, M, K, cnt = 0, arr[100006], arrRow[100006] = {K};
  scanf("%d %d %d", &N, &M, &K);
  for (int i = 1; i <= N ; i++)
  {
    scanf("%d",&arr[i]);
    arrRow[arr[i]]--;
    if(arrRow[arr[i]] <= 0)
    {
      cnt++;
    }
  }
  printf("%d\n",cnt);
  return 0;
}
