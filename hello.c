#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("hello world\n");
	int *p;
	int *p8;
	int a;
	a = 100;
	int *lmp;
	lmp = &a;
	*lmp = 200;
	printf("%d\n", a);
	return 0;
}