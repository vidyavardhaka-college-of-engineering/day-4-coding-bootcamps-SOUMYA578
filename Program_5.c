// You will be given an integer array 'arr'. Your task is to print the largest
// and smallest element in 'arr'.

#include <stdio.h>

int main() {
	int arr[3], n, i, max, min;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	max = arr[0];
	min = arr[0];

	for (i = 1; i < n; i++) {
		if (arr[i] > max)
			max = arr[i];

		if (arr[i] < min)
			min = arr[i];
	}
	printf("max=%d\n", max);
	printf("min=%d\n", min);

	return 0;
}
