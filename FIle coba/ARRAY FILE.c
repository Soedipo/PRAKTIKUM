#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void userlog(FILE *x);
void userreg(FILE *x);
void daftarakun();

struct{
	char id[20], pass[20], name[25];
}user;
FILE *user_file;

int x, USER;
int n, loop = 0;
int looplog = 0;
char string[250];

int main(){
	userreg(user_file);
	system ("cls");
	
	userlog(user_file);
	system ("cls");
	
	daftarakun();
}


void userlog(FILE *x){
	char userid[20], userpass[20];
	printf ("\n");
	printf ("------------- HELLO USER ^_^ ---------------"
	"\n================ LOGIN =====================\n\n");
	x = fopen("Coba.dat", "rb");
	printf ("\tUsername\t: ");
	gets(userid);
	printf ("\tPassword\t: ");
	gets(userpass);
	while (fread(&user, sizeof (user), 1, x)==1){
	if (strcmp(userid, user.id)==0 && strcmp(userpass, user.pass)==0){
		printf ("============LOGIN BERHASIL=============\n\n"); system ("pause"); system ("cls"); break;} 
	
	else if(USER > 0){
		printf ("\n*Username atau Password tidak sesuai, kesempatan login %d kali lagi\n\n", USER); USER--; system ("pause"); system("cls"); userlog(x);}

	else {
		printf ("\n*Kesempatan login habis!!!\n\n"); system("pause"); system ("cls"); 
		}
	}
	fclose(x);
}



void daftarakun(){
	int i = 1;
	printf ("\n\t============PREMIUM===========\n\n");
	user_file = fopen("Coba.dat", "rb"); 
	while (fread (&user, sizeof(user), 1, user_file) == 1){
		printf ("\t%d. Nama\t: %s\n", i, user.name); 
		printf ("\t   Username\t\t\t: %d\n", user.id);
		printf ("\t   Password\t\t: %s\n", user.pass);
		printf ("\n");
		i++;
		}
	fclose(user_file); 
}

void userreg(FILE *x){
	getchar();
	printf ("\n");
	printf ("------------- HELLO USER ^_^ ---------------"
	"\n================ REGISTER ===================\n\n");
	x = fopen("Coba.dat", "ab"); 
	printf ("Username: ");
	gets (user.id);
	printf("Password: ");
	gets (user.pass);
	printf ("Nama: ");
	gets (user.name);
	fwrite(&user, sizeof(user), 1, x); 
	fclose(x);
}
