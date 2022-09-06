#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dane
{
    char imie[50];
    char nazwisko[36];
   int wiek;
   double zarobki;
};
int compar(const void *p1, const void *p2)
{
    struct dane d1 = *(struct dane *)p1;
    struct dane d2 = *(struct dane *)p2;
  
   
    
}

int main_tab()
{
      struct dane d[100];

    int k=0;

 FILE *ffin = fopen("dane_posortowane.dat", "r");

    if(!ffin)
    {
        printf("Blad otwarcia pliku do czytania.\n");
        exit(-1);
    }
    
  

    int g=0;
printf("+----+------------+-------------------------+--------+-------------+\n");
printf("| lp | Imię       | Nazwisko                |   Wiek |     Zarobki |\n");
printf("|----+------------+-------------------------+--------+-------------+\n");
    while(fscanf(ffin, "%s %s %d %lg ", d[g].imie, d[g].nazwisko, &d[g].wiek,&d[g].zarobki)==4)
    {
        printf("|%3d | %-11s|%-25s|%8d|%13lg|\n",g+1, d[g].imie,d[g].nazwisko,d[g].wiek,d[g].zarobki);

        g++;
    }
printf("+----+------------+-------------------------+--------+-------------+\n");
fclose(ffin);
return 0;
}