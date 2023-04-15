#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/sysinfo.h"

int
main(int argc, char **argv)
{
  // int size_struct = sizeof(long)+2*sizeof(unsigned long)+sizeof(unsigned short);
  // printf("%d\n",size_struct);
  struct sysinfo_str info;
  sysinfo((uint64)&info);
  printf("System info : \n");
  printf("* uptime : %d\n",info.uptime);
  printf("* free memory : %d byte\n",info.free_memory);
  printf("* total memory : %d byte\n",info.total_ram);
  printf("* number of procces : %d\n",info.procs);
  exit(0);
}
