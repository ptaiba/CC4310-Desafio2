#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
  if(argc < 3) {
  	printf("tailog necesita al menos 3 argumentos");
  	return 1;
  }
  FILE * fp;
  fp = fopen(argv[1]);
}