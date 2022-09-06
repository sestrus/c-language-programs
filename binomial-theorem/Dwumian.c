/* typ nazwa(argumenty) */

/* n! = 1*2*3*...*n */
#include <math.h>
double silnia(unsigned n)
{
double s=1.0;
int k=1;
while(k<=n)
{
s*=k;
k++;
}
/* for(wyrazenie inicjujace; wyrazenie sprawdzajace; wyrazenie modyfikujace)
inistrukcja; */
return s;
}



double Silnia(unsigned n)
{ 
if(n==0)
return 1.0;
return n*Silnia(n-1);
}



#include <stdlib.h>
#include <stdio.h>
double SN(unsigned n, unsigned k)
{
if(n<k); 
/* liczymy tylko gdy k jest mniejsze od n*/


return silnia(n)/silnia(k)/silnia(n-k);
}
/* (a+b)^n = SN(n,0)*a^n*b^0+SN(n,1)*a^(n-1)*b^1+...+SN(n,n)*a^0*b^n */


#include <math.h>

double fL(double a, double b, unsigned n)
{
return pow(a+b,n);
/* (a+b)SS^n */
}
double fR(double a,double b, unsigned n)
{
double s=0.0;
int k=0;
while(k<=n)
{
 s += SN(n,k)*pow(a,n-k)*pow(b,k);
k++;
}
return s; 
}








#include <stdio.h>

int main()
{
 unsigned n;

printf("n = ");

scanf("%d", &n);


double a,b;
printf ("a = ");
scanf("%lg", &a);

printf("b = ");
scanf("%lg", &b);
printf("L = %g =? %g = P\n",fL(a,b,n),fR(a,b,n));

return 0;
}


/* while wyrazenie) instrukcja; */
/* januszk@th.uf.uj.edu.pl */
