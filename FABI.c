#include <stdio.h>
main()
{
	int n, i, j=0, a=1, b;
	printf("Masukkan jumlah baris: ");
	scanf("%d", &n);
	for(i=1; i<=n ; i++)
	{
		printf("%d ", j);
		b=j+a;
		j=a;
		a=b;
	}
}
