#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dane
{
    char imie[30];
    char nazwisko[36];
   int wiek;
   double zarobki;
};
int compar4(const void *p1, const void *p2)
{
    struct dane d1 = *(struct dane *)p1;
    struct dane d2 = *(struct dane *)p2;
  
    if((d1.wiek-d2.wiek)!=0)
    {
        return d1.wiek-d2.wiek;
    }
   else if(strcmp(d1.nazwisko,d2.nazwisko))
   {
       return strcmp(d1.nazwisko,d2.nazwisko);
   }
    else if(strcmp(d1.imie,d2.imie))
    {
        return strcmp(d1.imie,d2.imie);
    }
    
    if((d1.zarobki-d2.zarobki)!=0)
    {
        return d1.zarobki-d2.zarobki;
    }
    
    
}

int main_z4()
{
    FILE *fin = fopen("dane.dat", "r");

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

    
qsort((void*)d, k, sizeof(struct dane), compar4);
    FILE *fout = fopen("dane_posortowane.dat", "w");

    if(!fout)
    {
        printf("Blad otwarcia pliku do pisania.\n");
        exit(-1);
    }

    int i;

    qsort((void*)d, k, sizeof(struct dane),compar4);

    for(i=0; i<k; i++)
{
    fprintf(fout, "%s %s %d %lg \n", d[i].imie, d[i].nazwisko, d[i].wiek, d[i].zarobki);
}
 fclose(fout);   
  

 FILE *ffin = fopen("dane_posortowane.dat", "r");

    if(!ffin)
    {
        printf("Blad otwarcia pliku do czytania.\n");
        exit(-1);
    }
    
  

    int g=0;

    while(fscanf(ffin, "%s %s %d %lg ", d[g].imie, d[g].nazwisko, &d[g].wiek,&d[g].zarobki)==4)
    
fclose(ffin);
return 0;
}