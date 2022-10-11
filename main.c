#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(int n, int r)
{
	int a, b, c;
	
	a = factorial(n);
	b = factorial(n-r);
	c = factorial(r);
	return(a/(b*c));
 } 
 
int factorial(int x)
 {
 	int i, res = 1;
 	
 	for (i=1; i <= x; i++)
 		res = res*i;
 		
 	return res;
 }
 
int main(int argc, char *argv[]) {
	int n, r, result;
	
	
	printf("정수 두 개를 입력하세요 : ");
	scanf("%d %d", &n, &r);
	
	result = combination(n, r);
	printf("result is : %d", result);
}
	
