#include<stdio.h>

int main()
{
  long long int T,K,N,swap;
  long long int A[106];
  scanf("%lld",&T);
  while (T--) {
    int temp;
    scanf("%lld\n",&N);
    for (long long int i = 1; i <= N; i++) {
      scanf("%lld",&A[i]);
    }
    scanf("%lld",&K);
    long long int store = A[K];
    while (7) {
         swap = 1;
         for (long long int i = 1; i < N; i++) {
           if (A[i]>A[i+1]) {
             temp  =  A[i];
             A[i]  =  A[i+1];
             A[i+1] = temp;
             swap = 0;
           }
         }
         if (swap == 1) {
           break;
         }
    }
    for (long long int i = 1; i <= N; i++) {
      if (A[i] == store) {
        store = i;
        break;
      }
    }
    printf("%lld\n",store);
  }
  return 0;
}
