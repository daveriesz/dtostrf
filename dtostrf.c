
#include <stdio.h>

double xround(double v, int p)
{
  int ii;
  double v2, v3;

  v2 = v;
  if(p<0) { for(ii=0 ; ii>p ; ii--) { v2 *= 10.0; } }
  if(p>0) { for(ii=0 ; ii<p ; ii++) { v2 /= 10.0; } }

//  v3 = ((double)(((long long)(v2 - ((double)((long long)v2)) * 10.0))));
  v3 = ((double)((long long)((v2 - ((double)((long long)v2))) * 10.0)));
  v2 = ((double)((long long)v2));
  if(v3 >= 5.0) { v2 += 1.0; }
  printf("v2 = %.5f\n", v2);
  printf("v3 = %.5f\n", v3);
  
  if(p<0) { for(ii=0 ; ii>p ; ii--) { v2 /= 10.0; } }
  if(p>0) { for(ii=0 ; ii<p ; ii++) { v2 *= 10.0; } }

  return v2;
}

char *dtostrf(double v, signed char w, unsigned char p, char *s)
{
  char *cp = s;
  int whlen, ii;
  double vt;

  // whlen will be the length of the whole part of the number
  for(whlen=0, vt=v ; vt>=0.0 ; whlen++) { vt /= 10.0; }
  if(whlen == 0) { whlen = 1; } // gotta have something there

  vt = v - ((double)((long long)v));  
  for(ii=0 ; ii<p ; ii++);

  
  s[0]='\0';
  return s;
}

