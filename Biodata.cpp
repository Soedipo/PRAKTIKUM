#Include <stdio.h>
struct biodata
{
	char nama[30],nim[30];
	float tp, ta, mandi, jurn, tk, mean;
}b;
int main ()
{
	printf ("Nama			: "); 
		gets (b.nama);
	printf ("NIM 			: "); 
		gets (b.nim);
	printf ("Nilai TP		: "); 
		scanf ("%f", &b.tp);
	printf ("Nilai TA		: "); 
		scanf ("%f", &b.ta);
	printf  ("Nilai Mandiri\t 	: ");
		scanf ("%f", &b.mandi);
	printf  ("Nilai Jurnal\t  	: ");
		scanf ("%f", &b.jurn);
	printf  ("Nilai TK 	 	: ");
		scanf ("%f", &b.tk);
	printf ("\n");
//Rata-rata
	b.mean = (b.tp + b.ta + b.mandi + b.jurn + b.tk)/5;
//Hasil Form
	printf ("Data Praktikan \n");
	printf ("Nama			: %s \n", &b.nama);
	printf ("NIM 			: %s \n", &b.nim);
	printf ("Nilai TP		: %.2f \n", b.tp);
	printf ("Nilai TA 		: %.2f \n", b.ta);
	printf ("Nilai Mandiri\t	: %.2f \n", b.mandi);
	printf ("Nilai Jurnal \t	: %.2f \n", b.jurn);
	printf ("Nilai TK 		: %.2f \n", b.tk);
	printf ("Rata-rata		: %.2f", b.mean);
	return 0;
}

