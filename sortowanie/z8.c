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
int compar8(const void *p1, const void *p2)
{
    struct dane d1 = *(struct dane *)p1;
    struct dane d2 = *(struct dane *)p2;
  

}

int main_z8()
{
    FILE *fin = fopen("dane_posortowane.dat", "r");

    if(!fin)
    {
        printf("Blad otwarcia pliku do czytania.\n");
        exit(-1);
    }
    
    struct dane d[100];

    int k=0;

    while(fscanf(fin, "%s %s %d %lg ", d[k].imie, d[k].nazwisko, &d[k].wiek,&d[k].zarobki)==4)
    {
        
       k++;
    }
   
    

    fclose(fin);

    printf("Wczytano %d osob.\n", k);

    FILE *fout = fopen("plik.dat", "w");

    if(!fout)
    {
        printf("Blad otwarcia pliku do pisania.\n");
        exit(-1);
    }

    int i;

  

    for(i=0; i<k; i++)
{
    fprintf(fout, "%s %s %d %lg \n", d[i].imie, d[i].nazwisko, d[i].wiek, d[i].zarobki);
}
 fclose(fout);   
  

return 0;
}