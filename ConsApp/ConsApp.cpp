// ConsApp.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

int main()
{
	printf("Table of multiply\n");
	for (size_t i = 1; i <= 9; i++)
	{
		for (size_t j = 1; j <= 9; j++)
		{
			printf("%d\t", i*j );
		}
		printf("\n");
	}
    return 0;
}

