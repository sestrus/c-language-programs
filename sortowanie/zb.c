#include <stdio.h>
#include <stdlib.h>
#include <string.h>


   


int menu()
{
    printf("\n1.Wczytaj dane z pliku do tablicy. \n");
    printf("2. Pokaż dane w postaci tabelki.\n");
    printf("3. Sortuj dane: n i w z\n");
    printf("4. Sortuj dane: i n w z\n");
    printf("5. Sortuj dane: w n i z\n");
    printf("6. Sortuj dane: z n i w\n");
    printf("7. Dodaj rekord do danych.\n");
    printf("8. Zapisz dane do pliku.\n");
    printf("9. Koniec programu\n");
    printf("\nDokonaj wyboru: ");
    
    int t = 9;
    scanf("%d",&t);

    return t;
}
int main_tab();
int main_z1();
int main_z2();
int main_z3();
int main_z4();
int main_z5();
int main_z6();
int main_z8();
int main()
 
{
while(1)
    switch(menu())
    {
        case 1:
        main_z1();
        break;
        
        case 2:
         main_tab();
        break;
        
        case 3:
          main_z2();
        break;
         case 4:
         main_z3();
        break;
         case 5:
         main_z4();
        break;
         case 6:
         main_z5();
        break;
         case 7:
         main_z6();
        break;
         case 8:
         main_z8();
        break;
         case 9:
         
          exit(0);
        break;

        case 10:
 exit(0);
      
        default:
        printf("\nNie ma takiej opcji\n");
    }
    return 0;
}