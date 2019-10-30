#include <stdio.h>

void merge(int a[], int start, int mid, int end)
{
	// Store starts of both the halves
	int p = start, q = mid + 1;
	int len = end - start + 1;
	int arr[len], k = 0;
	while (len--) // Loop must run len times to fill all elements
	{
		if (p > mid) // part1 end?
			arr[k++] = a[q++];
		else if (q > end) // part2 end?
			arr[k++] = a[p++];
		else
		{
			// Check which part has bigger element
			arr[k++] = (a[p] < a[q]) ? a[p++] : a[q++];
		}
	}
	// Copy sorted elements
	for (int j = 0; j < k; ++j)
	{
		a[start++] = arr[j];
	}
}

void mergeSort(int a[], int l, int r)
{
	if (l < r)
	{
		int m = (l + r) / 2;
		mergeSort(a, l, m);
		mergeSort(a, m + 1, r);
		merge(a, l, m, r);
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
	mergeSort(a, 0, n - 1);
	printArr(a, n);
}
