#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char v_char;
int v_int;
long int v_longint;
long long int v_longlongint;
float v_float;

printf("Size of a char: %d byte(s)\n", sizeof(v_char));
printf("Size of an int: %d byte(s)\n", sizeof(v_int));
printf("Size of a long int: %d byte(s)\n", sizeof(v_longint));
printf("Size of a long long int: %d byte(s)\n", sizeof(v_longlongint));
printf("Size of a float: %d byte(s)\n", sizeof(v_float));

return (0);
}
