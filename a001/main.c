#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char input[100];
	while(scanf("%s",&input)!=EOF)
	{
	printf("hello, %s\n",input);
	}
	return 0;
}
