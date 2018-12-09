#include<stdio.h>

int main(){
	int i,T,S;
	int array[1000];
    for(i=0;i<S;i++){
    	scanf("%d",&array[i]);
    }


	return 0;
}
/*
algorithm---

1]	store in an array //for loop
2]	convert each index into number//acsii value
3]	check for each index for prime number
4]	if prime number leave it as is
5]	if not then
	5-1]
	/*solution

	#include <stdio.h>
int primeconvert(int);
int check(int);

int main()
{
    int T,i,ln;
    scanf("%d",&T);

    while(T!=0)
    {
        scanf("%d",&ln);
    char a[500];
    scanf("%s",a);
    for(i=0;i<ln;i++)
   {

   if(check(a[i])==0)
  a[i]=primeconvert(a[i]);

  if(a[i]>=127)
  a[i]=113;
  if(a[i]<65)
  a[i]=67;
  printf("%c",a[i]);

   }
   printf("\n");
   T--;
}

}
int primeconvert(int n)
{
    int j=0;
    int i=0;

    while(check(n+i)==0)
    {
        i++;
        }
        while(check(n-j)==0)
        {
         j++;
            }
    if(i==j)

    return n-i;
    else if(i<j)
    return n+i;
    else
    return n-j;
}
int check(int p)
{
    int i,j,k;
    if(p==2)
    return 1;
    for(i=2;i<p;i++)
    {
        if((p%i)!=0)
        {
            if(i==p-1)
            return 1;
            continue;
        }else
        {
            return 0;
            break;
        }}}
