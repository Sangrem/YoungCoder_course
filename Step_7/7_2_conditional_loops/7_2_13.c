#include <stdio.h>

int main() {
  double eps, e = 1;
  int k = 1, i = 1;
  scanf("%lf", &eps);
  while ( e += 1./k )
  {
      if ( 1./k < eps ) break;
      k *= ++i;
  } printf("%.8lf", e);
  return 0;
}
