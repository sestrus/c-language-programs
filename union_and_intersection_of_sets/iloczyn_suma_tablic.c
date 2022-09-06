/*
in: a[10], b[10]
out: c = a + b oraz d = a * b (wypisać c i d)
*/

#include <stdio.h>

int main() {
  double a[10], b[10], c[20], d[10];
  int i, j, k, liczba = 0, rozmiarC = 0, rozmiarD = 0;

  printf("Podaj tablice A: ");

  for(i = 0; i < 10; i++) {
      scanf("%lg", &a[i]);

      for (j = 0; j < i; j++) {
        if (a[i] == c[j]) {
          liczba = 1;
          break;
        }
      }

      if (liczba == 0) {
        c[rozmiarC++] = a[i];
      }

      liczba = 0;
  }

  printf("Podaj tablice B: ");

  for(i = 0; i < 10; i++) {
      scanf("%lg", &b[i]);

      for (j = 0; j < i + rozmiarC; j++) {
        if (b[i] == c[j]) {
          liczba = 1;
          break;
        }
      }

      if (liczba == 0) {
        c[rozmiarC++] = b[i];
      }

      liczba = 0;
  }

  for(i = 0; i < 10; i++) {
    for(j = 0; j < 10; j++) {
    liczba = 0;

      if(a[i] == b[j]) {
        for(k = 0; k < rozmiarD; k++) {
          if(a[i] == d[k]) {
            liczba = 1;
          }
        }

        if(liczba != 1) {
          d[rozmiarD] = a[i];
          rozmiarD++;
        }
      }
    }
  }

printf("Suma zbiorów: ");
  for (i = 0; i < rozmiarC; i++) {
    printf("%lg ", c[i]);
  }

  printf("\n\nIloczyn zbiorów: ");

  for (i = 0; i < rozmiarD; i++) {
    printf("%lg ", d[i]);
  }

  return 0;
}
