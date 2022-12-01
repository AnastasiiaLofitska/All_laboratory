#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "function.h"


int main (int argc, char* argv[]) {
	int a, b, c;
	printf("\n  Enter a: ");
	scanf ("%d", &a);
	printf("\n  Enter b: ");
	scanf ("%d", &b);
	printf("\n  Enter c: ");
	scanf ("%d", &c);
	discriminant(a, b, c);
	return 0;
}
