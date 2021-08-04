#include <stdio.h>
int main()
{
     int i, n = 0;
     while(n == 0)
     {
     	scanf ("%d", &i);
     switch (i)
     {
          case 1:
             printf("Case1 ");
             break;
          case 2:
             printf("Case2 ");
             break;
          case 3:
             printf("Case3 ");
             break;
          case 4:
             printf("Case4 ");
             break;
          default:
             printf("Default ");
     }
 	}    
     return 0;
}
