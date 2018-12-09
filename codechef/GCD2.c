#include<stdio.h>

int num(int a)
{
	int p=0,i;
	for (int i = 0; i < count; i++) {
		/* code */
	}
}

int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main() {
  int t,A,B;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d %d",&A,&B);
    int k = gcd(B,A);
    printf("%d\n",k);
  }

  return 0;
}
//wrong see solution
