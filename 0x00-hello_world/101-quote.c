#include <unistd.h>
/**
 * main - Entry point
 * Description: print a quote using write function 
 * Return 1 (error)
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout),
	write(1, quo, 59);
	return (1);


