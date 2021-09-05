
#include <stdio.h>

char *dtostrf(double v, signed char w, unsigned char p, char *s)
{
  char *cp = s;
  int whlen;, ii;
  double vt;

  // whlen will be the length of the whole part of the number
  for(whlen=0, vt=v ; vt>=0.0 ; whlen++) { vt /= 10.0; }
  if(whlen == 0) { whlen = 1; } // gotta have something there

  vt = v - ((double)((long long)v))
  for(ii=0 ; ii<p ; ii++)

  
  s[0]='\0';
  return s;
}

