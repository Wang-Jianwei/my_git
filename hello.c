#include <stdio.h>

struct book
{
	char *name;
	float price;
	unsigned ISBN;
};


int main(int argc, char const *argv[])
{
	struct book math = {
		.name = "math",
		.price = 35,
		.ISBN = 9547
	}; 
	
	struct book class[60];

	struct book *p = &math;
	math.price = 25;
	p->price = 38;

		
	return 0;
}