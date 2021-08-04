//variabel a dan b, a = 5, b = 3, bagaimana outputnya agar a = 3, b = 5
#include <stdio.h>
int main ()
{
	int a = 5, b = 3, c;
	printf ("a = %d\n", a);
	printf ("b = %d\n", b);
	printf ("\n");
	c = a;
	a = b;
	b = c;
	printf ("a = %d\n", a);
	printf ("b = %d", b);
	return 0;
}
