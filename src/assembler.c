#include "../inc/assembler.h"
#include "../inc/util.h"

/* DO NOT MODIFY THE GIVEN API*/
int assembler(FILE *input_file,
              FILE *output_file)
{
  /*YOUR CODE HERE*/
  char my_string[100];
  while (fgets(my_string, 100, input_file) != NULL)
  {
    uint32_t code = 0;
    if (strncmp(my_string, "add ", 4) == 0)
    {
      code += 51;
      code = code + (0 << 12) + (0 << 25);

      r_type(my_string, code);
    }
    if (strncmp(my_string, "mul ", 4) == 0)
    {
      code += 51;
      code = code + (0 << 12) + (1 << 25);

      r_type(my_string, code);
    }
    if (strncmp(my_string, "sub ", 4) == 0)
    {
      code += 51;
      code = code + (0 << 12) + (32 << 25);

      r_type(my_string, code);
    }
    if (strncmp(my_string, "sll ", 4) == 0)
    {
      code += 51;
      code = code + (1 << 12) + (0 << 25);

      r_type(my_string, code);
    }
    if (strncmp(my_string, "mulh ", 5) == 0)
    {
      code += 51;
      code = code + (1 << 12) + (1 << 25);

      r_type(my_string, code);
    }
    if (strncmp(my_string, "slt ", 4) == 0)
    {
      code += 51;
      code = code + (2 << 12) + (0 << 25);

      r_type(my_string, code);
    }
    if (strncmp(my_string, "sltu ", 5) == 0)
    {
      code += 51;
      code = code + (3 << 12) + (0 << 25);

      r_type(my_string, code);
    }
    if (strncmp(my_string, "xor ", 4) == 0)
    {
      code += 51;
      code = code + (4 << 12) + (0 << 25);

      r_type(my_string, code);
    }
    if (strncmp(my_string, "div ", 4) == 0)
    {
      code += 51;
      code = code + (4 << 12) + (1 << 25);

      r_type(my_string, code);
    }
    if (strncmp(my_string, "srl ", 4) == 0)
    {
      code += 51;
      code = code + (5 << 12) + (0 << 25);

      r_type(my_string, code);
    }
    if (strncmp(my_string, "sra ", 4) == 0)
    {
      code += 51;
      code = code + (5 << 12) + (0 << 25);

      r_type(my_string, code);
    }
    if (strncmp(my_string, "or ", 4) == 0)
    {
      code += 51;
      code = code + (6 << 12) + (0 << 25);

      r_type(my_string, code);
    }
    if (strncmp(my_string, "rem ", 4) == 0)
    {
      code += 51;
      code = code + (6 << 12) + (0 << 25);

      r_type(my_string, code);
    }
    if (strncmp(my_string, "and ", 4) == 0)
    {
      code += 51;
      code = code + (7 << 12) + (0 << 25);

      r_type(my_string, code);
    }
    //---------------------------------------------------------------------
    if (strncmp(my_string, "lb ", 3) == 0)
    {
      code += 51;
    }
    //---------------------------------------------------------------------
    dump_code(output_file, code);
    delete my_string;
  }

  return 0;
}
