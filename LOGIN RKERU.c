//Buatlah program login akun menggunakan algoritma rekursif, apabila gagal login 3 kali maka kesempatan login berakhir

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct{
	char user[20], pass[20];
}a;
int x, n=2;
int main()
{
	printf("Username : ");
	gets(a.user);
	printf ("Password : ");
	gets(a.pass);
	system("cls");
	if(strcmp(a.user, "Daskom")==0 && strcmp(a.pass, "bangjek")==0)
	{
		printf ("Login berhasil!!");
		x=1;
	}
	else if (x != 1)
	{
		if (n > 0)
		{
			printf ("Login gagal, sisa kesempatan login %d kali\n", n);
			n--; 
			system ("pause");
			main();  
			//printf ("Sisa kesempatan %d kali", n);
		}
		else printf ("Kesempatan login habis");
	}
}
	
	
/*printf("Username : \n");
gets(user);
printf ("Password : \n");
gets(pass)

    if(strcmp(input,"TELU")== 0) //lengkapi syntax
    {
        printf("\nProgram Ter-Pause || \n");
        system("pause"); main(); // prosedur utama
    }
    else if(strcmp(input, "Exit")==0)
    {
        printf("\nProgram Akan Keluar...");
		system("exit");
    }
    else main();
}*/
