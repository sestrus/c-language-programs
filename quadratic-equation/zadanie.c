/*
a*x^2+b*x+c=0
delta = b^2-(4*a*c)
jeśli delta < 0 => brak pierwiastków
jeśli delta = 0 => x = -b / (2 * a)
jeśli delta = 0 => x1 = (-b + sqrt(delta)) / (2 * a); x2 = (-b - sqrt(delta)) / (2 * a);
*/

#include <math.h>
#include <stdio.h>


int rkw(double a, double b, double c, double *x1, double *x2) 
{
  double delta = b*b-(4*a*c);

  if (delta < 0) {
    return 0;
  } else if (delta == 0) {
    *x1 = -b / (2 * a);
    return 1;
  } 
  else 
  {
    delta = sqrt(delta);
    *x1 = (-b - delta) / (2 * a);
    *x2 = (-b + delta) / (2 * a);
    return 2;
  }
}

double sprawdzenie(double a, double b, double c, double x) {
  return (a * x * x) + (b * x) + c;
}

int main() {
  double a, b, c, x1, x2;

  printf("Podaj równanie kwadratowe w postaci: ax^2+bx+c=0\n");
  scanf("%lgx^2%lgx%lg=0", &a, &b, &c);

  int n = rkw(a, b, c, &x1, &x2);
  double s;

  if (n==0) {
    printf("Brak pierwiastków\n");
  } else if (n==1) {
    printf("Jeden pierwiastek: x0 = %lg\n\nSprawdzenie:\n", x1);

    s = sprawdzenie(a, b, c, x1);
    printf("%lg * %lg^2 + %lg * %lg + %lg = %lg\n", a, x1, b, x1, c, s);
  } else if (n==2) {
    printf("Dwa pierwiastki: x1 = %lg\tx2 = %lg\n\nSprawdzenie:\n", x1, x2);

    s = sprawdzenie(a, b, c, x1);
    printf("%lg * %lg^2 + %lg * %lg + %lg = %lg\n", a, x1, b, x1, c, s);

    s = sprawdzenie(a, b, c, x2);
    printf("%lg * %lg^2 + %lg * %lg + %lg = %lg\n", a, x2, b, x2, c, s);
  } else {
    printf("Źle!"); 
  }

  return 0;
}

