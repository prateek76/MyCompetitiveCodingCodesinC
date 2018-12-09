#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int T,i,lena,lenb,max,atoi1,atoi2,atoisum;
  char numa[100],numb[100];
  scanf("%d",&T);
  while (T--) {
    scanf("%s %s",numa,numb);


    lena = strlen(numa);
    lenb = strlen(numb);

    if (lena>lenb) {
      max = lena;
      for ( i = lenb; i < lena; i++) {
        numb[i] = 0;
      }
    } else if (lenb>lena) {
      max = lenb;
      for ( i = lena; i < lenb; i++) {
        numa[i] = 0;
      }
    }
    int sum[max];
    for ( i = 0; i < max; i++) {
      atoi1 = numa[i];
      atoi1 = atoi(numa[i]);
      atoi2 = numb[i];
      atoi2 = atoi(numb[i]);
      atoisum = atoi1 + atoi2;
      if (atoisum > 9) {
        atoisum /= 10;
        atoisum = itoa(atoisum);
      } else {
        atoisum = atoisum;
        atoisum = itoa(atoisum);
      }
      sum[i] = atoisum;
    }
      printf("%s\n",sum);
  }
  return 0;
}
