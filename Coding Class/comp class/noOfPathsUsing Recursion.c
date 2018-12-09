#include<stdio.h>
//commented line not working
int main()
{
  //int ans = 0;
  printf("%d\n", numberOfPaths(3,3) );
  //printf("%d\n", func(3,3));
  return 0;
}
int numberOfPaths(int m,int n)
{
  if (m == 1 || n == 1) {
    return 1;
  }
  return numberOfPaths(m-1,n) + numberOfPaths(m,n-1);
}
/*
void func(int i,int j) {
  if (i == 1 && j == m) {
    ans = ans + 1;
    return;
  }
  if (i > 1) {
    func(i-1,j);
  }
  if (j < m) {
    func(i,j+1);
  }
}
*/
