#include <stdio.h>

int main()
{
	int array[10];
	array[0] = 0;
	array[1] = 1;
	


	int i, n = 10;
	for (i = 2; i < n; i++)
	{
		array[i] = array[i-2] + array[i-1];
	}
	for (int j = 0; j < n; j++){
		printf("%d\n", array[j]);
	}
	return 0;
}	
