#include <stdio.h>
#include<string.h>

int main()
{
  int T,n;
  char s[20],s1[20],s2[20];
  scanf("%d",&T);
  while (T--)
  {
  int cnt1=1,cnt2=0;
    scanf("%d",&n);
    scanf("%s",s);
    strcpy(s1,s);
    for(int i=0;i<n-1;i++)
    {
      scanf("%s",s);
      if(strcmp(s1,s) == 0)
      {
        cnt1++;
      }
      else if(strcmp(s1,s) != 0)
      {
        strcpy(s2,s);
        cnt2++;
      }
    }
    if (cnt1 > cnt2)
    {
      printf("%s\n",s1);
    }
    else if (cnt2 > cnt1) {
      printf("%s\n",s2);
      //printf("%s %s\n",s1,s2 );
      //printf("%d %d\n",cnt2,cnt1);
    }
    else{
      printf("Draw\n");
      //printf("%s %s\n",s1,s2 );
      //printf("%d %d\n",cnt2,cnt1);
    }
  }
  return 0;
}
