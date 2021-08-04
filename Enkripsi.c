#include <stdio.h>
#include <string.h>

int main() 
{
	char str[100];
    int i, j = 0 , k = 3, n;
    int a, b; 
    printf ("Masukkan Pesan : ");
    gets (str);
    n = strlen(str) - 1;
	for(i = 0; (i < n && str[i] != '\0'); i+=4)
        str[i] = str[i] - 15;	
    for(i = 0; (i < n && str[i] != '\0'); i+=1)
        str[i] = str[i] - 4;	
    for(i = 0; (i < n && str[i] != '\0'); i+=10)
        str[i] = str[i] + 5;

      printf("\nEncrypted string: %s\n", str);
}//
