#include <stdio.h>
#include <stdlib.h>

int main(){

	int a,b,sum;

	a = rand()%6+1;
	b = rand()%6+1;
	sum = a + b;

	printf("Die 1: %d\n",a);
	printf("Die 2: %d\n",b);
	printf("Total value: %d\n",sum);

	return 0;

}
