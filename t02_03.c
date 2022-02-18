// 12S21015 - Sitogab Antonio Octavianus Girsang
// 12S21049 - Jesika Audina Purba

#include <stdio.h>

int main(int _argv, char **_argc)
{
   char operator;
  int a, hasil, bilangan;
  scanf("%c",&operator); 
  if (operator=='*')
  {
  a=1;
  }
  else if (operator=='+')
  {
  a=0;
  }
  else if (operator=='-')
  {
  a=0;
  }
  for (int i = 1; i < 5; ++i) {
  scanf("%i",&bilangan);
  if (bilangan == -1) {
  printf("0");
  break;
  }
  if (operator=='*')
  {
  hasil=a*bilangan;
  a=hasil;
  }
  else if (operator=='+')
  {
  hasil=a+bilangan;
  a=hasil;
  }
  else if (operator=='-')
  {
  hasil=a-bilangan;
  hasil=-hasil;
  a=hasil;
  }
  printf("%i\n", hasil);
  }

  return 0;
    
  return 0;
}
