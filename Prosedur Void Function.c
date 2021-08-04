#include <stdio.h>
void bilangan(int x)
{
 if (x >= 0 && x < 50)
 	{
 	printf ("E");
	}
 else if (x >= 50 && x < 60)
 	{
 		printf ("D");
	}
 else if (x >= 60 && x < 70)
 	{
 		printf ("C");
	}
 else if (x >= 70 && x < 80)
 	{
 		printf ("B");
 	}
 else if (x >= 80 && x <= 100)
 	{
 		printf ("A");
	}
}

void main (){
int a;

 printf("Masukkan Nilai : "); 
 scanf("%d",&a);
 bilangan (a);
}
