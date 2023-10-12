#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
int sumTwo(int a, int b)
{
	int c = a + b;
	return c;
}

int square(int n)
{
	return n*n;
}
int get_max(int x, int y)
{
	if (x > y)
		return x;
	return y;
}
int main(void)
{
	int a, b;
	int n;
	
	a=3;
	b=10;
	n=9;
	printf("sumTwo result : %i\n", sumTwo(a,b) );
	
	printf("square reslut : %i\n", square(n) );
	
	printf("get_max result : %i\n", get_max(a,b) );
}
