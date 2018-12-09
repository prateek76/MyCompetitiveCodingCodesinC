#include <stdio.h>
#include <string.h>

int main()
{
	int T,i,cnta=0,cntb=0;
	char s[105];
	scanf("%d",&T);
	while(T--){
		scanf("%s",s[105]);
		for (i = 0; i < strlen(s); ++i){
			if (s[i] == 'a'){
				cnta++;
			}
			else if (s[i] == 'b'){
				cntb++;
			}
		}
		if (cnta == 0 || cntb == 0 || cnta == cntb){
			printf("0\n");
		}
		else if (cnta > cntb){
			printf("%d\n",cntb);
		}
		else{
			printf("%d\n",cnta);
		}
	}	
	return 0;
}