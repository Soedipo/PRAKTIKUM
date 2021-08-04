#include <stdio.h>
int main()
{
    int menu;
    float a, b, hasil;
    printf("\n");
    printf("Program Kalkulator Sederhana\n");
    printf("\n\n");
    printf("\tMenu :\n");
    printf("\t1. Penjumlahan\n");
    printf("\t2. Pengurangan\n");
    printf("\t3. Perkalian\n");
    printf("\t4. Pembagian\n");
    printf("Pilih menu : ");
    scanf("%d",&menu);
    printf("\n");
    switch (menu){
      case 1:
        printf("\nPenjumlahan :\n");
        printf("Masukkan angka pertama : ");
        scanf("%f", &a);
        printf("Masukkan angka kedua   : ");
        scanf("%f", &b);
        hasil = a + b;
        printf("\n");
        printf("Hasil dari %.2f + %.2f = %.2f\n", a, b, hasil);
        break;
    case 2:
        printf("\nPengurangan :\n");
        printf("Masukan angka pertama : ");
        scanf("%f", &a);
        printf("Masukan angka kedua   : ");
        scanf("%f", &b);
        hasil = a - b;
        printf("\n");
        printf("Hasil dari %.2f - %.2f = %.2f\n", a, b, hasil);
        break;
    case 3:
        printf("\nPerkalian :\n");
        printf("Masukkan angka pertama : ");
        scanf("%f", &a);
        printf("Masukkan angka kedua   : ");
        scanf("%f", &b);
        hasil = a * b;
        printf("\n");
        printf("Hasil dari %.2f x %.2f = %.2f\n", a, b, hasil);
        break;
    case 4:
        printf("\nPembagian :\n");
        printf("Masukkan angka pertama : ");
        scanf("%f", &a);
        printf("Masukkan angka kedua   : ");
        scanf("%f", &b);
        hasil = a / b;
        printf("\n");
        printf("Hasil dari %.2f / %.2f = %.2f\n", a, b, hasil);
        break;
      default:
        printf("Anda salah memilih menu.");
        break;
    }
    return 0;
}
