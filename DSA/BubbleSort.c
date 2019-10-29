#include <stdio.h>

void swap(int *x, int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
}

void bubbleSort(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - i-1; ++j)
		{
			if(a[j] > a[j+1])
			{
				swap(&a[j], &a[j+1]);
			}
		}
	}
}

void printArr(int *a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	int a[] = {30, -10, 15, 0, 50, 75};
	int n = sizeof(a) / sizeof(a[0]);
	bubbleSort(a, n);
	printArr(a, n);
}
