#include <stdio.h>
#define MAX_INPUT 100
void Pangkat(int x, int y);
int bil, pangkat, hasil = 1, i;
int main()
{
	printf ("INPUT====================================\n\n");
	printf ("Masukkan bilangan : ");
	scanf ("%d", &bil);
	printf ("Masukkan pangkat : ");
	scanf ("%d", &pangkat);
	printf ("\nOUTPUT=================================\n\n");
	Pangkat(bil, pangkat);

}

void Pangkat(int x, int y)
{
	if (y == 0)
	printf ("Hasil : %d", hasil);
	else if (y == 1)
	{
	hasil = x;
	printf ("Hasil : %d", hasil);
	}
	else 
	{
		for (i = 0 ; i < y ; i++)
		{
			hasil *= x;
		}
		printf ("Hasil : %d", hasil);
	}
}


