#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num, x, y;
	printf("ENTER NUMBER : ");
	scanf("%d", &num);
	for (x = 0; x < num; x++)
	{
		for (y = 0; y < num; y++)
		{
			printf("*");

		}
		printf("\n");
	}
	return 0;

}