#include<stdio.h>

int main()
{
	char ch = 'A';		//1 bytes
	int i = 11;			//4 bytes
	float f = 3.14;		//4 bytes
	double d = 9.567;	//8 bytes

	printf("Value form the variables are :\n");
	printf("%c\n",ch);		// A
	printf("%d\n",i);		// 11
	printf("%f\n",f);		// 3.14
	printf("%lf\n",d);		// 9.567

	printf("Size of each variable\n");
	printf("Size of character : %d\n",sizeof(ch));		//1 byte
	printf("Size of inteteger : %d\n",sizeof(i));		//4 bytes
	printf("Size of float : %d\n",sizeof(f));			//4 bytes
	printf("Size of double : %d\n",sizeof(d));			//8 bytes

	printf("Address of each variable\n");
	printf("Address of ch : %d\n",&ch);
	printf("Address of i : %d\n",&i);
	printf("Address of f : %d\n",&f);
	printf("Address of d : %d\n",&d);

	return 0;
}