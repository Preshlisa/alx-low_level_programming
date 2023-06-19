#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: 0 (success)
 */
int main(void)
{
	char h;
	int j;
	long int k;
	long long int l;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(h));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(j));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(k));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
