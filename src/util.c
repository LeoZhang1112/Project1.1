#include "../inc/util.h"

/* YOUR CODE HERE */
#include <string.h>
uint32_t getnum(char *x)
{
  if (0 == strcmp(x, "x0") || 0 == strcmp(x, "zero"))
  {
    return 0;
  }
  if (0 == strcmp(x, "x1") || 0 == strcmp(x, "ra"))
  {
    return 1;
  }
  if (0 == strcmp(x, "x2") || 0 == strcmp(x, "sp"))
  {
    return 2;
  }
  if (0 == strcmp(x, "x3") || 0 == strcmp(x, "gp"))
  {
    return 3;
  }
  if (0 == strcmp(x, "x4") || 0 == strcmp(x, "tp"))
  {
    return 4;
  }
  if (0 == strcmp(x, "x5") || 0 == strcmp(x, "t0"))
  {
    return 5;
  }
  if (0 == strcmp(x, "x6") || 0 == strcmp(x, "t1"))
  {
    return 6;
  }
  if (0 == strcmp(x, "x7") || 0 == strcmp(x, "x2"))
  {
    return 7;
  }
  if (0 == strcmp(x, "x8") || 0 == strcmp(x, "s0") || 0 == strcmp(x, "fp"))
  {
    return 8;
  }
  if (0 == strcmp(x, "x9") || 0 == strcmp(x, "s1"))
  {
    return 9;
  }
  if (0 == strcmp(x, "x10") || 0 == strcmp(x, "a0"))
  {
    return 10;
  }
  if (0 == strcmp(x, "x11") || 0 == strcmp(x, "a1"))
  {
    return 11;
  }
  if (0 == strcmp(x, "x12") || 0 == strcmp(x, "a2"))
  {
    return 12;
  }
  if (0 == strcmp(x, "x13") || 0 == strcmp(x, "a3"))
  {
    return 13;
  }
  if (0 == strcmp(x, "x14") || 0 == strcmp(x, "a4"))
  {
    return 14;
  }
  if (0 == strcmp(x, "x15") || 0 == strcmp(x, "a5"))
  {
    return 15;
  }
  if (0 == strcmp(x, "x16") || 0 == strcmp(x, "a6"))
  {
    return 16;
  }
  if (0 == strcmp(x, "x17") || 0 == strcmp(x, "a7"))
  {
    return 17;
  }
  return 0;
}

void r_type(char *string, uint32_t code)
{
  const char s[2] = " ";
  char *part;
  int num;
  int i = 1;
  part = strtok(string, s);
  while (part != NULL)
  {
    part = strtok(NULL, s);
    num = getnum(part);
    if (i == 1)
    {
      code += (num << 7);
    }
    if (i == 2)
    {
      code += (num << 15);
    }
    if (i == 3)
    {
      code += (num << 20);
    }
    i = i + 1;
  }
}

/* DO NOT MODIFY CODES BELOW*/

/* Store code into file_ under fixed format */
void dump_code(FILE *file_, uint32_t code) { fprintf(file_, "0x%.8X\n", code); }

/* Output error information to file_ */
void dump_error_information(FILE *file_)
{
  fprintf(file_, "Assembling Error\n");
}
