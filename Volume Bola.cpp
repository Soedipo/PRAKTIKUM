#include <stdio.h>
#include <math.h>
#define phi 3.14
int main ()
{
	float r;
	float V;
//Input
	printf ("Jari-jari =" );
	scanf ("%f", &r);
	printf ("\n");
//Rumus
	V = (4*phi*pow (r,3))/3;
//Luas Lingkaran
	printf ("Volume Bola = %.2f\n", V);
	return 0;
}
