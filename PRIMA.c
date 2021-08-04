#include <stdio.h>
main()
{
	int prim, nprim, n, i, a=2, b=2, c;
	scanf("%d", &n);
	printf("\n");
	for(i=0 ; i<n ; i++)
	{
		for(b=2 ; b<=a ; b++)
		{
			if(a%b==0 && b!=a)
			{
				c = 0;
				break; 
			}
			else c = 1;
		}
		if (c == 1)
		{
			printf("%d ", a);
		}
		a++;
	}
}
