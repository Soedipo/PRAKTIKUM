#include <stdio.h>
int main ()
{
	float Luaspermukaan, L_a, sisi_sgt1, sisi_sgt2, p, l, t;
	printf ("Panjang=" );
	scanf ("%f", &p);
	printf ("Lebar=" );
	scanf ("%f", &l);
	printf ("Tinggi segitiga=" );
	scanf ("%f", &t);
	printf ("\n");
	L_a = p * l;
	sisi_sgt1 = (p*t)/2;
	sisi_sgt2 = (l*t)/2;
	printf ("\n");
	Luaspermukaan = L_a + sisi_sgt1*2 + sisi_sgt2*2;
	printf ("Luas Permukaan= %.2f\n", Luaspermukaan);
	return 0;
}
