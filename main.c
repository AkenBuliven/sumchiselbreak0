#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

  int a = 0, sum = 0;

  do
  {
    scanf ("%d", &a);
    sum = sum + a;
    
    if (a==0)
    {
      break;
    }
    
  } while ( a != 0);
  printf("sum=%d\n", sum);
  
    return 0;
}

  