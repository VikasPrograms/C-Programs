#include<stdio.h>

int X = 20;	// Data		//Global variable	//X - extern storage class

int Multiplication(int No1, int No2)	//Dukan		//function defination
{										//local variables(No1, No2, Ans)
	register int Ans = 0;	//register storage class - memory allocation in CPU register
	Ans = No1 * No2;
	return Ans;				//Pishavi - Ans
}

int main()					//Ghar
{
	int A = 10, B = 11;
	auto int Ret = 0;		//Ret means Return variable		//auto storage class - memory allocation in stack

	Ret = Multiplication(A,B);		//multiplication(10,11)

	printf("Multiplication is : %d\n",Ret);		//%d for decimal

	return 0;
}
// OS -> main() -> Multiplication() -> main() -> OS