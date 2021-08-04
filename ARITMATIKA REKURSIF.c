#include <stdio.h>
#define MAX_INPUT 100
void Aritmatika(int x, int y);
void jumlaharit (int x);
int angka[MAX_INPUT], i, j, deret, beda, total;
int main()
{
	printf ("INPUT====================================\n\n");
	printf ("Panjang deret : ");
	scanf ("%d", &deret);
	printf ("Beda : ");
	scanf ("%d", &beda);
	printf ("\nOUTPUT=================================\n\n");
	Aritmatika(deret, beda);
	printf ("\n");
	jumlaharit (deret);
}

void Aritmatika(int x, int y)
{
	angka[0] = y+1;
	for (i = 1 ; i <= x ; i++)
	{
		angka[i] = angka[i-1] + y;
	}
	
	printf ("Deret : ");
	for (i = 0 ; i < x ; i++)
	{
		printf ("%d ", angka[i]);
	}
}

void jumlaharit (int x)
{
	for (i = 0 ; i < x ; i++)
	{
		angka[i+1] += angka [i];
	}
	total = angka[x-1];
	printf ("Jumlah : %d", total);
}

