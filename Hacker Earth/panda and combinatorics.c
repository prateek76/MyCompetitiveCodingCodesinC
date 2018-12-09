#include<stdio.h>
#include<math.h>

int main(){

    long long int i=1,T,N,M,store1,store2;
    scanf("%lld",&T);
    while(T--)
    {
        long long int cnt = 0;
        scanf("%lld %lld",&N,&M);
        if(M == 1){
          cnt = N;
        }
        else{
        while(N>=0)
        {
            if(pow(M,i) > N)
            {
                N = N - (pow(M,i-1));
                cnt++;
                i=0;
                if(N < M )
                {
                    cnt += N;
                    N = -1;
                }
                if(N == 0)
                {
                    N = -1;
                }
            }
            i++;
        }
      }
        printf("%lld\n",cnt);
        i=1;

    }

    return 0;
}
