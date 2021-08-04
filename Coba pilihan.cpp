#include <stdio.h>
int main()
{
    int ok = 0, n;
    char input;
    while (ok == 0)
    {
          printf("Choose a number between 1-4\n");
          scanf ("%d", &n);
          switch (n)
          {
                 case 1:
                      printf("You've chosen number 1");
                      break;
                 case 2:
                      printf("You've chosen number 2");
                      break;
                 case 3:
                      printf("You've chosen number 3");
                      break;
                 case 4:
                      printf("You've chosen number 4");
                      break;
                 default:
                          printf("You have chosen an invalid number");
          }
          printf("\nInput again? (Y/N)\n");
          scanf("%s", &input);
          if (input=='N'||input=='n')
          {ok;}
          else if (input=='Y'||input=='y')
          {printf("\n");}


    }

 getchar();
 getchar();   
}
