#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n, i;
	char word[20];
	printf ("Jumlah string : ");
	scanf ("%d", n);
	for (i=1 ; i < n ; i++)
	{
		printf ("string %d : ", i);
		gets (word[i]);
	}
	printf ("%s", word);
}
