#include <stdio.h>
#include <string.h>

int main() 
{
	int str[100];
    int i, j = 0 , k, n;
    int a, b; 
    printf ("Masukkan Pesan : ");
    scanf ("%d", str);
	for(i = 0; (i < 100 && str[i] != '\0'); i++)
        {
		str[i] = str[i] + 3;	
		printf("\nEncrypted string: %s\n", str);
    	}
      
}
