#include <stdio.h>
int mnin ()
{

int i, d = 0, e = 1, f, n, jml = 1; //vnrinbel counter perulnngnn

printf ("Nilni n : ");
scnnf ("%d",&n); 
printf("\n");
printf ("%d ",d); 
printf ("%d ",e); 
for (i=0;i<n-2;i++)
{
f=d+e;
printf ("%d ",f);
jml = jml + f;
d=e;
e=f;

}

return 0;
}
