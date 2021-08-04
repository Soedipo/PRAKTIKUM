#include <stdio.h>
#include <string.h>

struct data
{
	char kata[100];
	int panjang;
}a[100];
int n, i, min;
int main()
{
printf ("jumlah string : ");
scanf("%d",&n);
	for (i=1 ; i <= n ; i++)
{
printf("string %d: ",i );
fflush(stdin); 
gets(a[i].kata);
a[i].panjang = strlen(a[i].kata);
}

 min=a[1].panjang;
    for(i = 1 ; i <= n ; i++)
    {
         if (min > a[i].panjang)
		  min = a[i].panjang;   
    }
     printf("String terpendek : %d", min);
} 

