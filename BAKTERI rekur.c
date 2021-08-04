//Terdapat sebuah bakteri yang membelah diri menjadi 2 setiap 2 detik. 
//Buatlah program untuk mengetahui jumlah bakteri pada detik ke-n!
#include <stdio.h>
int bakteri(int a);
int s, hasil;
int main(){
printf("Masukkan waktu : ");
scanf("%d", &s);
hasil = bakteri(s);
printf("Hasil bakteri setelah %d detik adalah %d ", s, hasil);
}

int bakteri(int a){
	if (a < 2)
	return 1;
	else if (a >= 2)
	{
	return 2*bakteri(a-2);
	}
}
