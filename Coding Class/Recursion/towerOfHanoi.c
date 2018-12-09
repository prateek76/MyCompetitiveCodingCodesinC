#include<stdio.h>

int cnt = 0;//global variable

//func han
void han(int n,char fromTower,char toTower,char helpTower)
{
    if (n == 1) {
      printf("Move disk 1 from %c to rod %c\n",fromTower,toTower);
      cnt++;
      return;
    }
    han(n-1,fromTower,helpTower,toTower);
    printf("Move disk %d from tower %c to %c\n",n,fromTower,toTower);
    cnt++;
    han(n-1,helpTower,toTower,fromTower);
}

int main()
{
  int n;
  scanf("%d",&n);
  han(n,'a','c','b');
  printf("%d\n",cnt );

  return 0;
}
