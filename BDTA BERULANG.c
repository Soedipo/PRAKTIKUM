#include <stdio.h>
#include <stdlib.h>
struct data
{
char nama[50], kls[20], nim[20];
float ipk;
}a[100]; int i,n;

int main()
{
printf("Banyak mahasiswa : ");
scanf("%d",&n);
 for (i=0;i<=n-1;i++)
 {
 getchar();
 printf("Mahasiswa ke-%d \n",i+1);
 printf("Nama : ");   gets(a[i].nama);
 printf("kelas :");   gets (a[i].kls);
 printf ("nim :"); gets (a[i].nim);
 printf ("ipk :"); scanf ("%f",&a[i].ipk);
 }
 
system("cls");
 for(i=0;i<=n-1;i++)
    {
        printf("Mahasiswa %d \n", i+1);
        printf("Nama\t: %s \n",a[i].nama);
        printf("Kelas\t: %s \n",a[i].kls);
        printf("Nim\t: %s \n",a[i].nim);
        printf("IPK\t: %.2f \n",a[i].ipk);
        printf("\n");
    }
    return 0;
}
