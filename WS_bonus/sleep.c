#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/fcntl.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if(argc <= 1){
    fprintf(2, "sleep: no argument passed\n");
    exit(1);
  }
  
  int ticks = atoi(argv[1]);
  sleep(ticks);

  exit(0);
}
