#include "stdio.h"
#include <stdlib.h>

int binary_search(int *a,int n,int key)
{
		int mid,right,left;
		left = 1;
		right = n;
		while (left <= right)
		{
				mid = (left + right) / 2;
				if (a[mid] == key)
						return mid;
				else if (a[mid] < key)
						left = mid + 1;
				else
						right = mid -1;
		}
		return 0;
}



int insert_search(int *a,int n,int key)
{
		int mid,right,left;
		left = 1;
		right = n;
		while (left <= right)
		{
				mid = left + (key - a[left]) / (a[right]- a[left]) * (right - left); 
				if (a[mid] == key)
						return mid;
				else if (a[mid] < key)
						left = mid + 1;
				else
						right = mid -1;
		}
		return 0;
}
