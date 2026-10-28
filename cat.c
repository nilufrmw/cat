#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  char cmd[256];
  
  sprintf(cmd, "cat %s", argv[1]);
  system(cmd);
  
  return 0;
}
