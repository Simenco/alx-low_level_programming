#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char*quote="and that piece of art is useful\" - Dora Korpar, 2005-10-19;
  write(2,quote, 59);
return (1);
}
