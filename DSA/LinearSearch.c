#include <stdio.h>

int main()
{
	int a[] = {-10, -4, 0, 10, 12, 13, 24, 56, 100};
	int n = sizeof(a) / sizeof(a[0]);
	// Search keys
	int x = 12;
	int i;
	for (i = 0; i < n; ++i)
	{
		if (i[a] == x)
		{
			printf("%d found at index - %d\n", x, i);
		}
	}
	if (i == n)
		printf("%d not found\n", x);
}
