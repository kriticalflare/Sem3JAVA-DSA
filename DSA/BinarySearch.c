#include <stdio.h>
#include <stdlib.h>

int bsiter(int a[], int n, int x)
{
	int l = 0, r = n - 1;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (x == a[mid])
		{
			return mid;
		}
		else if (x < a[mid])
		{
			r = mid - 1;
		}
		else if (x > a[mid])
		{
			l = mid + 1;
		}
	}
	return -1;
}

int bsrec(int a[], int l, int r, int x)
{
	if (l >= r)
		return -1;
	int mid = (l + r) / 2;
	if (x == a[mid])
	{
		return mid;
	}
	else if (x < a[mid])
	{
		bsrec(a, l, mid - 1, x);
	}
	else if (x > a[mid])
	{
		bsrec(a, mid + 1, r, x);
	}
}

int main()
{
	int a[] = {-10, -4, 0, 10, 12, 13, 24, 56, 100};
	int n = sizeof(a) / sizeof(a[0]);
	// Search keys
	int x[] = {0, -4, 15};
	for (int i = 0; i < 3; ++i)
	{
		int index = bsiter(a, n, x[i]);
		if (index != -1)
			printf("%d found at index = %d\n", x[i], index);
		else
			printf("%d not found\n", x[i]);
	}
	for (int i = 0; i < 3; ++i)
	{
		int index = bsrec(a, 0, n - 1, x[i]);
		if (index != -1)
			printf("%d found at index = %d\n", x[i], index);
		else
			printf("%d not found\n", x[i]);
	}
}
