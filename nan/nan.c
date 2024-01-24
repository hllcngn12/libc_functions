#include <stdio.h>
#include <math.h>

int main(int ac, char** av){
printf("1-%d\n",nan("test"));
printf("2-%d\n",nan(NULL));
printf("3-%d\n",nan("undefined"));
printf("4-%d\n",nan("underflowed"));
return 0;}
