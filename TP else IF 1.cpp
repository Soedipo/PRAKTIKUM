#include <stdio.h>
int main ()
{
	int n, a, y;
	printf ("Masukkan bilangan : ");
	scanf ("%d", &n);
	if ( 0 < n && n < 10)
	{
		printf ("%d adalah satuan\n", n);
	}
	else if ( n == 10)
	{
		printf ("%d adalah puluhan", n);
	}
	else if ( 20 <= n && n < 100)
	{
		printf ("%d adalah puluhan", n);
	}
	else if ( 100 <= n && n < 1000)
	{
		printf ("%d adalah ratusan", n);
	}
	else if ( 1000 <= n && n < 10000 )
	{
		printf ("%d adalah ribuan", n);
	}
	
	return 0;
}

