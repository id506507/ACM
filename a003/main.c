#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int M,D,S;
	while(scanf("%d" "%d",&M,&D)!=EOF)
		{
		S=(M*2+D)%3;
		if(S==0)
			printf("´¶³q\n");
		else if(S==1)
			printf("¦N\n");
		else
			printf("¤j¦N\n");		 
		}
	return 0;
}
