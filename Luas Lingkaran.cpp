#include <stdio.h>
#include <math.h>
#define phi 3.14
int main ()
{
	float r;
	float L, V;
//Input
	printf ("Jari-jari =" );
	scanf ("%f", &r);
	printf ("\n");
//Rumus
	L = phi*pow(r,2);
	V = (4*phi*pow (r,3))/3;
//Luas Lingkaran
	printf ("Luas Lingkaran = %.2f\n", L);
	printf ("Volume Bola = %.2f\n", V);
	return 0;
}
