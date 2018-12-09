#include<stdio.h>
#include<math.h>

int max(int a,int b,int c)
{
  if (a>b && a>c) {
    return a;
  }
  else if (b>a && b>c) {
    return b;
  }
  else {
    return c;
  }
}

int main()
{
  int N,x1,x2,x3,y1,y2,y3,cnt=0,maxy;
  int side1,side2,side3;
  scanf("%d",&N);
  for(int i=0;i<N;i++)
  {
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    side1 = pow(x2-x1,2) + pow(y1-y2,2);
    side2 = pow(x2-x3,2) + pow(y3-y2,2);
    side3 = pow(x3-x1,2) + pow(y1-y3,2);
    maxy  = max(side1,side2,side3);
    if (maxy == side1) {
      if (side1 == side2 + side3) {
        cnt++;
      }}
    else if (maxy == side2) {
      if (side2 == side1 + side3) {
        cnt++;
      }}
    else if (maxy == side3) {
      if (side3 == side1 + side2) {
        cnt++;
      }}
  }
  printf("%d",cnt);
  return 0;
}
