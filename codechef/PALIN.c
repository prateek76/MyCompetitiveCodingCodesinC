#include<stdio.h>
#include <string.h>

int main()
{
  int t,len,actlen;
  char arr[1000006];
  scanf("%d",&t);
  while(t--)
  {
    scanf("%s",arr);
    int flag = 0;
    len      = strlen(arr);

    //first case 999999999 all digits 9
    /*when even*/
    //second case even or odd
    //if outer digit incresed make all interior digits 0**only if inside one and no increse made till now then only
    //check from inside to outside
    //if both digits 9 than make both 0
    //if left digit is less than right in comparision then increse the left digit by 1 and make right digit also same as left
    //if left digit is greater than right in comparision then make right digit equal to left
    /*when odd*/
    //if middle digit is nine and it is a palin increse middle-1 and equal that to middle+1 and all interior digit is 0
    for(int i=0; i<len;i++)
    {
      if(arr[i] != '9')
      {
        flag = 2;
        break;
      }
    }
    //Ist
    if(flag == 0)
    {
      printf("1");
      for (int i = 0; i < len-1; i++) {
        printf("0");
      }
      printf("1\n");
    }
    //2nd

    if(len % 2 == 0)
    {
      actlen = (len/2) - 1;
      for(int i = actlen;i>=0;i--)
      {
        if(arr[i] == arr[actlen-i+2])
        {
          arr[i] = 0;
          arr[actlen-i+2] = 0;
          flag = 0;
        }

      }
    }
  }
  return 0;
}
