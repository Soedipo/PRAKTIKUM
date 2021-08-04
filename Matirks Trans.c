#include <stdio.h>

int main()
{
    /* Deklarasi variabel */
    int M,N,i,j;
    int X[101][101];

    /* 1. Baca input M dan N*/
    scanf("%d %d", &M,&N);

    /* 2. Baca input bilangan sebanyak M x N */
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d", &X[i][j]);

            /* 3. Cek posisi bilangan */
            /* 4. Cetak Matriks Rotasi */
        }
	}
	printf("\n");
    for(i=0; i<=N-1; i++)
    {
        for(j=0; j<=M-1; j++)
        {            
            printf("%d", X[i][j]);        
        }
        printf("\n");
    } 
    printf("\n");
       for (i=0;i<=M-1;i++) {
		for (j=0;j<=N-1;j++)
			printf("%d ",X[i][j]);
			printf("\n");
		}
}

/*  
 
	}        	if(i==M-1)
				else{
				printf("%d\t", X[i][j]);
			}    */
	

