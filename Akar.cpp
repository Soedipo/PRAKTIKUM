#include <stdio.h>
#include <math.h>
int main ()
{
	float p, l, t_l, t_sgt1, t_sgt2;
	float L_perm, L_alas, L_segitiga1, L_segitiga2;
	
// Luas limas segiempat alas persegi dan persegi panjang
// Input Data
	printf ("Panjang=" );
	scanf ("%f", &p);
	printf ("Lebar=" );
	scanf ("%f", &l);
	printf ("Tinggi limas=" );
	scanf ("%f", &t_l);
	printf ("\n");
// Rumus
	L_alas = p * l;
	t_sgt1 = sqrt((t_l*t_l)+pow(p/2,2));
	t_sgt2 = sqrt((t_l*t_l)+pow(l/2,2));
	L_segitiga1 = (l*t_sgt1)/2;
	L_segitiga2 = (p*t_sgt2)/2;
	L_perm = L_alas + (L_segitiga1 + L_segitiga2)*2;
// Luas Alas dan Segitiga 1, 2
	printf ("Luas Alas= %.2f\n", L_alas);
	printf ("Luas segitiga 1= %.2f\n", L_segitiga1);
	printf ("Luas segitiga 2= %.2f\n", L_segitiga2);
	printf ("\n");
// Luas Permukaan
	printf ("Luas Permukaan= %.2f\n", L_perm);
	return 0;
}
