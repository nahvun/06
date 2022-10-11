#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{
	return a+b;
}

int square(int n)
{
	return (n*n);
}

int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main(int argc, char *argv[]) {
	
	int res_sumTwo, res_square, res_get_max;
	
	res_sumTwo = sumTwo(2, 3);
	res_square = square(5);
	res_get_max = get_max(10, -20);
	
	printf("%i %i %i", res_sumTwo, res_square, res_get_max);

	return 0;
}
