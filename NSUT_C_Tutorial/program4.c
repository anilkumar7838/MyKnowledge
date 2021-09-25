// Anilkumar (2020UCD2101)
#include<stdio.h>

int main(){
	
	int a, b;

	printf("Give two numbers A and B to find quotient of A/B:\n");
	scanf("%d %d", &a, &b);

	if(b == 0)
		printf("Value of denominator cannot be 0");
	else
		printf("Value of quotient of A/b is %d", a/b);

	return 0;
}

