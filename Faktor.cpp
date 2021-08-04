#include <stdio.h>
int main ()
{
	int i = 1, a, b, c, faktor;
	printf ("Masukkan angka : ");
	scanf ("%d", &a);
	printf ("Faktor dari %d adalah", a);
	do 
	{
	if(a % i == 0) 
	 {
	 printf(" %d ",i);
	 }
	 i++; 
	}
	while (i <= a);
}
