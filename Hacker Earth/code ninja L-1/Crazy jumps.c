#include<stdio.h>

int main()
{
    long long int T,y,N,cnt=0;

    scanf("%lld",&T);
    while(T--){
        scanf("%lld",&N);
        while(1){

                N = N|(N>>1);
                N = N|(N>>2);
                N = N|(N>>4);
                N = N|(N>>8);
                N = N|(N>>16);
                N = N|(N>>32);

                y = ((N+1)>>2);
                N = N - y;

                cnt++;

                    if(N==0){
                        break;
                    }


}
                printf("%lld\n",cnt);
}

    return 0;
}
