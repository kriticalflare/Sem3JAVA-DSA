#include <stdio.h>

void selectionSort(int a[], int n)
{
	for(int i=0;i<n-1;++i)
	{
		int smallest = i;
		for(int j=i+1;j<n;++j)
		{
			if(a[j] < a[smallest])
			smallest = j;
		}
		int t = a[smallest];
		a[smallest] = a[i];
		a[i] = t;
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
	selectionSort(a, n);
	printArr(a, n);
}
