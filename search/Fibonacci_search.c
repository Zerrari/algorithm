#include "stdio.h"
#include <stdlib.h>
#include <sys/resource.h>

int F(int);

int Fibonacci_search(int* a,int n,int key)
{
	int left,right,mid,i,k;
	left = 0;
	right = n;
	while (n > F(k) - 1)
			k++;
	for (i = n;i < F(k) - 1;i++)
			a[i] = a[n];
	while (left <= right)
	{
			mid = left + F(k-1) - 1;
			if (a[mid] < key)
			{
					left = mid + 1;
					k = k-2;
			}
			else if(a[mid] > key)
			{
					right = mid - 1;
					k = k-1;
			}
			else
			{
					if (k <= n)
							return mid;
					else
							return n;
			}
			
	}
	return 0;
}

int F(int n)
{
		if ( n == 0)
				return 0;
		if ( n == 1)
				return 1;
		return F(n-1) + F(n-2);
}
