#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "../get_next_line.h"

int main(int argc, char **argv)
{
  char *str;
  int fd = open(argv[argc - 1], O_RDONLY);
  int i = 0;
  printf("%i\n", BUFFER_SIZE);
  while (!str)
  {
    str = get_next_line(fd);
    printf("%i = %s", i, str);
    free(str);
  }
  system("leaks a.out");
}
