#include <stdio.h>
int main ()
{
	float h, m, s;
	float hs, ms, S;
//Input
	printf ("Jam =" );
	scanf ("%f", &h);
	printf ("Menit = ");
	scanf ("%f", &m);
	printf ("Detik = ");
	scanf ("%f", &s);
	printf ("\n");
//Rumus
	hs= h*3600;
	ms= m*60;
	S= hs+ms+s;
//Total Detik
	printf ("Jam --> Detik = %.2f detik\n", hs);
	printf ("\n");
	printf ("Menit --> Detik = %.2f detik\n", ms);
	printf ("\n");
	printf ("Total detik = %.2f detik", S);
	return 0;
}
