#include<stdio.h>

int main()
{
	int Arr [5] = {10, 20, 30, 40, 50};

	printf("Base address of array : %p\n",Arr);		// %p is print the pointer type data
	printf("Base address of array : %p\n",&Arr);	// ‘&’ is used to get the address of the variable
	printf("Size of array is : %d\n",sizeof(Arr));	// %d is decimal integer

	return 0;
}