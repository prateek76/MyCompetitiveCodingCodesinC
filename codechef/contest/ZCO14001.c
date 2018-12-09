#include<stdio.h>

int main()
{
  long long int N,H,view[100006],command[100006],pick=0,flag,i,j;
  scanf("%lld %lld",&N,&H);
  for ( i = 1; i <= N; i++) {
    scanf("%lld",&view[i]);
  }
  i=1;
  for ( j = 0; j>=0 ; j++) {
    scanf("%lld",&command[j]);
    if (command[j] == 0) {
      break;
    }
    if (command[j] == 2 && i != N) {
      i++;
    }
    if (command[j] == 1 && i != 1) {
      i--;
    }
    if (command[j] == 3 && pick == 0 && view[i] != 0) {
      pick = 1;
      view[i]--;
    }
    if (command[j] == 4 && pick == 1 && view[i] < H) {
      pick = 0;
      view[i]++;
    }
  }
  for ( i = 1; i <= N; i++) {
    printf("%lld ",view[i]);
  }

  return 0;
}
