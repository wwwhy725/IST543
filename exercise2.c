#include <stdio.h>
#include <string.h>

void h(int n)
{
  int result;
  result = n*n;
L: /* Location L */
  printf("result = %d\n", result);
}

void g(int u, int v, int w)
{
  h(u+v+w);
}

void f(int a, int b)
{
  g(a+b, a-b, a*b);
}


void main()
{
  int A[5] = {1,2,3,4,5};
  f(11,7);
}
