#include <stdio.h> 
int main(){ 
FILE *f_struktur; 
int n, i; 
struct {
char Nama[50],TTL[100];
double NIK; 
} daftar; 
f_struktur=fopen("Data E KTP.dat","wb"); 
printf("Banyaknya data: "); 
scanf("%d", &n); getchar(); 
for (i=1; i<=n; i++){ 
printf("Nama : "); 
gets(daftar.Nama); 
printf("NIK : "); 
scanf("%lf", &daftar.NIK); getchar();
printf("TTL : ");
gets(daftar.TTL); 
fwrite(&daftar,sizeof(daftar),1,f_struktur); 
} 
fclose(f_struktur); 
return 0;
}
