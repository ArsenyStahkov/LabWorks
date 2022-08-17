#include <stdio.h>

int array_sum_index(const int arr[], int len)
{
	if(len <= 0)
		return 0;
	return arr[0] + array_sum_index(&(arr[1]), len - 1);
}

int array_sum_der(const int *arr, int len)
{
	return len <= 0 ? 0 : *arr + array_sum_der(arr + 1, len - 1);
}

int main()
{
	int len;
	len = 5;
	int arr[len];
	printf("%i\n", array_sum_index(arr, len));
	printf("%i\n", array_sum_der(arr, len));
	return 0;
}

