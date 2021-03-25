#include "stdio.h"
#include <stdlib.h>

void swap(int* nums,int a,int b)
{
		int tmp = nums[a];
		nums[a] = nums[b];
		nums[b] = tmp;
		return;
}


void SelectSort(int* nums,int len)
{
		int i,j,min;
		for (i = 0;i < len;i++)
		{
				min = i;
				for (j = i + 1;j < len;j++)
				{
						if (nums[min] > nums[j])
								min = j;
				}
				if (min != i)
						swap(nums, i, min);
		}
		return;
}
