#include <stdio.h>
#include <stdlib.h>

unsigned long* fibonacci(int x, unsigned long* arr) 
{
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 0; i < x-1; ++i)
	{ arr[i+2] = arr[i] + arr[i+1]; }
	return arr;
}

int main(int argc, char** argv) {

	int x;
	unsigned long *arr;
	printf("ilk kaç değer girilicek : ");
	scanf("%d",&x);
	arr = (long*)malloc(sizeof(long)*x);
	arr = fibonacci(x, arr);
	for (int i = 0; i < x; ++i)
	{ printf("%lu | ", arr[i]); }
	printf("\n");
    return (EXIT_SUCCESS);
}
