# sumchiselbreak0

Сумма элементов последовательности 
Вычислить сумму элементов последовательности, неизвестной длины.

Входные данные:
Последовательность целых чисел, оканчивающаяся нулём.

Выходные данные: 
Одно целое число -- сумма всех элементов последовательности.


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
