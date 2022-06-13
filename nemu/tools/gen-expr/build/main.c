#include <stdio.h>

int main() {

  FILE *fp =NULL;
  int result;
  char buff[255];

  fp = fopen("./input","r");
  for(int i=0; i <10; i++) {
    fscanf(fp, "%d", &result);
    fscanf(fp, "%s", buff);
    printf("%s=%d\n",buff,result);

  }
  fclose(fp);

  return 0;
}
