#include<stdio.h>
main(){
	struct{
		char name[50], address[50], gejala[50];
	}a[100];
	
	int i,n;
	printf("Jumlah pasien : ");
	scanf("%d",&n); 
	getchar();
		printf ("\n");
	//Input
	printf("=====INPUT=====\n");
	for(i=0;i<n;i++){ 
		printf("%d. Nama Pasien : ",i+1); 
		gets(a[i].name); 
		printf("   Alamat      : "); 
		gets (a[i].address); 
		printf("   Gejala      : "); 
		gets (a[i].gejala); 
		printf ("\n");
	}
		printf("==========================================\n\n");
	//Output
	printf("=====OUTPUT=====\n");
	for(i=0;i<n;i++){
		printf("%d. Nama Pasien : %s\n", i+1,a[i].name);  
		printf("   Alamat      : %s\n", a[i].address);
		printf("   gejala      : %s\n", a[i].gejala);
		printf ("\n");
	}
}
