#include <stdio.h>
#define phi 3,14
int main()
{
	float r, s, L;
	printf ("jari jari=");
	scanf ("%f", &r);
	printf ("garis pelukis=");
	scanf ("%f", &s);
	L = (phi*r)*(r+s);
	printf ("luas permukaan = %f", &L);
}
