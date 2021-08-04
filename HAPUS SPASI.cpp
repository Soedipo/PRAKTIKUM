#include<stdio.h>
#include<string.h>

int main()
{
    char kata[1000], x[1000];
    int i = 0, a = 0;

    printf("String dengan spasi : ");
    gets(kata);
    while(kata[i] != '\0')  
    {
        if(kata[i] != ' ') 
        {
            x[a++] = kata[i];
        }
        i++;
    }
    x[a] = '\0';
    printf("\nString tanpa spasi  : %s", x);
    return 0;
}
