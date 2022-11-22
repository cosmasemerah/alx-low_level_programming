#include <stdio.h>

void SumOfElements(int* A)
{
	printf("%p\n", A);
	
	printf("%d\n", A[3]);
	/**
	for (i = 0; i < size; i++)
	{
		sum += A[i];
	}
	*/

	//return (sum);
}
int main(void)
{
	int A[] = {1,2,3,4,5};

	SumOfElements(A);

	printf("%p\n", A);

	return (0);
}
