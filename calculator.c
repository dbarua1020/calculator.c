#include <stdio.h>
#include<math.h>
int main ()
{
  float a, b;
  int n; 
  char c;
  printf ("***Calculator***");
  printf ("Enter 1 for addition");
  printf ("\nEnter 2 for substraction");
  printf ("\nEnter 3 for multiplication");
  printf ("\nEnter 4 for division");
  printf ("\nEnter 5 to find power");
  printf ("\nEnter 6 to find square root\n");
  scanf ("%d", &n);
  switch (n)
    {
    case 1:
      printf ("Enter the two numbers");
      scanf ("%f %f", &a, &b);
      printf ("The addition of %f and %f is %f", a, b, a + b);
      break;
    case 2:
      printf ("Enter two numbers");
      scanf ("%f %f", &a, &b);
      printf ("The substraction of %f and %f is %f", a, b, a - b);
      break;
    case 3:
      printf ("Enter two numbers");
      scanf ("%f %f", &a, &b);
      printf ("The multiplication of %f and %f is %f", a, b, a * b);
      break;
    case 4:
      printf ("Enter two numbers");
      scanf ("%f %f", &a, &b);
      printf ("The division of %f and %f is %f", a, b, a / b);
      break;
    case 5:
      printf ("Enter two numbers");
      scanf ("%f %f", &a, &b);
      printf ("The value of %f^%f is %f", a, b, pow (a, b));
      break;
    case 6:
      printf ("Enter the number");
      scanf ("%f", &a);
      printf ("The square root of %f is %f", a, sqrt (a));
      break;
    default:
      printf ("Invalid input.");
    }
}