#include <stdio.h>
#define MAX_INPUT 1000
struct mahasiswa{
char nama[20];
int nim, nilai;
} mhs[MAX_INPUT];
int n, i;
void input(int x);
void output(int x);

int main(){
printf("Banyak Mahasiswa : ");
scanf("%d", &n);
printf ("\n");
input(n);
printf ("\n==OUTPUT==\n\n");
output(n);
return 0;
}

void input(int x){
for (i = 0 ; i < x ; i++)
	{
		getchar();
		printf("Nama Mahasiswa %d\t: ", i+1);
		gets(mhs[i].nama);
		printf("NIM\t\t\t: ");
		scanf ("%d", &mhs[i].nim);
		printf ("Nilai\t\t\t: ");
		scanf ("%d", &mhs[i].nilai);
		printf ("\n");
	}
} 

void output(int x){
	for (i = 0 ; i < x ; i++)
	{
		printf("Nama Mahasiswa %d\t: %s\n", i+1, mhs[i].nama);
		printf("NIM\t\t\t: %d\n", mhs[i].nim);
		printf ("Nilai\t\t\t: %d\n", mhs[i].nilai);
		printf ("\n");
	}
}
