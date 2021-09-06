
#include <stdio.h>
#include <string.h>

char *dtostrf(double __val, signed char __width, unsigned char __prec, char *__s);
double xround(double v, int p);

#define TEST_XROUND(vi, rn, vc) \
  { double vo = xround((vi), (rn)) ; if(vo==(vc)) { printf("%15.5lf == %15.5lf SUCCEEDED\n", vo, vc); } \
  else { printf("%15.5lf != %15.5lf FAILED, vo, vc\n"); } }

void test_xround()
{
  double v2;

  TEST_XROUND(12.34567,  0, 12.0);
//  TEST_XROUND(12.34567, -1, 12.3);
//  TEST_XROUND(12.34567, -2, 12.35);
//  TEST_XROUND(12.34567, -3, 12.346);
//  TEST_XROUND(12.34567, -4, 12.3457);
//  TEST_XROUND(123456.7,  0, 123457);
//  TEST_XROUND(123456.7,  1, 123460);
//  TEST_XROUND(123456.7,  2, 123500);
//  TEST_XROUND(123456.7,  3, 124000);d
//  TEST_XROUND(123456.7,  4, 120000);



  v2 = xround(v, -p);
  printf("v=%.10f, v2=%.10f\n", v, v2);

  return;
}


void dotest_dtostrf(double v, int w, int p)
{
  char fmt[32], str1[1024], str2[1024];

  sprintf(fmt, "%%%d.%dlf", w, p);
  sprintf(str1, fmt, v);

  dtostrf(v, w, p, str2);
  
  printf(">>%25s<< %s >>%-25s<<\n", str1, strcmp(str1, str2)?"!=":"==", str2);
}

void test_dtostrf()
{
  dotest_dtostrf(123.456, 7, 0);
  dotest_dtostrf(123.456, 7, 1);
  dotest_dtostrf(123.456, 7, 2);
  dotest_dtostrf(234.567, 7, 1);
  dotest_dtostrf(234.567, 0, 2);
  return;
}

int main(int argc, char **argv)
{
  test_xround();
  return 0;
}

