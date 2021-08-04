#include <stdio.h>
int n,a,b,i[20], j;
main()
{
	printf("jumlah angka: ");
	scanf("%d", &n);
	for(a=1 ; a<=n ; a++)
	{
		scanf("%d", &i[a]);
	}
	for(a=1 ; a<=n ; a++)
	{
		printf("%d ", i[a]);
	}
	
	printf("\n\n");
	
	for(j=n ; j>=1 ; j--)
	{
		for(a=1 ; a<j ; a++)
		{
		if(i[a]<i[a+1])
			{
				b=i[a];
				i[a]=i[a+1];
				i[a+1]=b;
			}
		}
	}

	for(a=1 ; a<=n ; a++)
	{
		printf("%d ", i[a]);
	}
}
