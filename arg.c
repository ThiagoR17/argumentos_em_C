#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
  double media = 0;
  for(int i=1; i<argc; i++) media += atof(argv[i]);
  printf("%lf\n", media/(argc-1));
  return 0;
} 
