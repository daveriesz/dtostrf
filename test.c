
#include <stdio.h>
#include <string.h>

char *dtostrf(double __val, signed char __width, unsigned char __prec, char *__s);

void dotest(double v, int w, int p)
{
  char fmt[32], str1[1024], str2[1024];

  sprintf(fmt, "%%%d.%dlf", w, p);
  sprintf(str1, fmt, v);

  dtostrf(v, w, p, str2);
  
  printf(">>%25s<< %s >>%-25s<<\n", str1, strcmp(str1, str2)?"!=":"==", str2);
}

int main(int argc, char **argv)
{
  dotest(123.456, 7, 1);
  return 0;
}

