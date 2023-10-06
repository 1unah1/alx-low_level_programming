#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
  printf("Size of char: %zu byte\n", sizeof(char));
  printf("Size of int: %zu byte\n", sizeof(int));
  printf("Size of long int: %zu byte\n", sizeof(long));
  printf("Size of long long int: %zu byte\n", sizeof(long long));
  printf("Size of float: %zu byte\n", sizeof(float));

  return (0);
}
