#include <stdio.h>
#include <string.h>

int n, i;
char text[99];
main()
{
	printf("text : ");
	gets(text);
	n = strlen(text);
	for(i=0 ; i<=n ; i+=4)
	{
		text[i]=text[i]+8;
	}
	printf("%s", text);
}
