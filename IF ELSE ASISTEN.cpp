#include <stdio.h>
#include <string.h>
int main()
{
	char c[3];
	printf ("Masukkan Kode Asisten	:"); 
	gets (c);
	if (strcmp(c, "FLY") == 0)
	{
		printf ("%s piket hari Senin", c);
	}
	else if (strcmp(c, "NOO") == 0)
	{
		printf ("%s piket hari Selasa", c);
	}
	else if (strcmp(c, "AMF") == 0)
	{
		printf ("%s piket hari Rabu", c);
	}
	else if (strcmp(c, "HNA") == 0)
	{
		printf ("%s piket hari Kamis", c);
	}
	else if (strcmp(c, "IZZ") == 0) 
	{
		printf ("%s piket hari Jumat", c);
	}
	else if (strcmp(c, "RAQ") == 0)
	{
		printf ("%s piket hari Sabtu", c);
	}
	else
	{
		printf ("Kode tidak ditemukan");
	}
	return 0;
}

