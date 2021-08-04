#include<stdio.h>

int a[100];
int i, b, n, lok;
int main()
{
//INPUT BANYAK DATA
 	printf("Banyak nilai: ");
 	scanf("%d", &n);
	printf ("\n");
// INPUT NILAI
	for(i = 0 ; i < n ; i++)
 	{
  		printf("Nilai %d: ", i+1);
  		scanf("%d", &a[i]);
 	}
// SORTING
	if (a[i] >= 0 && a[i] <= 100)
	 for (i = n-1 ; i >= 1 ; i--)
	 {
     	for (b = 1 ; b <= i ; b++)
		{
      		if (a[b-1] < a[b])
			{
       			lok = a[b-1];
       			a[b-1] = a[b];
       			a[b] = lok;
			}

		}
	 }
	else 
	 
printf ("\n===========================\n\n");
//OUTPUT A, B, C, D ,E	
	for (i = 0 ; i < n ; i++)
  	{
  		printf ("%d. ", i+1);
   			if (a[i] >= 0 && a[i] <= 50)
   			{
   				printf("%d[E]", a[i]);
  			}
  			else if(a[i] > 50 && a[i] < 60)
  			{
   				printf("%d[D]", a[i]);
  			}
			else if(a[i] >= 60 && a[i] < 70)
  			{
   				printf("%d[C]", a[i]);
  			}
  			else if(a[i] >= 70 && a[i] < 80)
  			{
   				printf("%d[B]", a[i]);
  			}
  			else if (a[i] >= 80 && a[i] <= 100)
			{
				printf("%d[A]", a[i]);
			}
			else 
			{
				printf ("%d[Nilai tidak tersedia]", a[i]);
			}
		printf("\n");
	}
}
