#include <stdio.h>
#include <string.h>

int main() {
   char s1[1000];
   char s2[50];

   int n;
   int m;
   int times;
   int len;     
   int leno;	
   printf ("Masukkan kalimat: ");
   gets (s1);
   printf ("Kata yang dicari: ");
   gets (s2);
   
   len = strlen(s2);
   leno = strlen(s1);
   m = 0;
   n = 0;
   times = 0;
   
   while(s1[n] != '\0') {

      if(s1[n] == s2[m]) {    

       

         while(s1[n] == s2[m]  && s1[n] !='\0') {
            n++;
            m++;
         }

         
         if(m == len && (s1[n] == ' ' || s1[n] == '\0')) {

      
            times++;
         }
      } else {          
         while(s1[n] != ' ') {       
            n++;
            if(s1[n] == '\0')
            break;
         }
      }
		
      n++;
      m=0;  
   }

   if(times > 0) {
      printf("'%s' muncul %d kali.\n", s2, times);
   } else {
      printf("'%s' tidak ditemukan.\n", s2);
   }
   
printf ("times : %d\n", times);
printf ("len : %d\n", len);
printf ("m : %d\n", m);
printf ("n : %d\n", n);
printf ("leno : %d\n", leno);

   return 0;
}
