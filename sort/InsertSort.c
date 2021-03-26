#include "stdlib.h"
#include <stdio.h>

void InsertSort(int* nums,int len)
{
		int i,j;
		for (i = 2;i < len;i++)
		{
				if (nums[i] < nums[i-1])
				{
						nums[0] = nums[i];
						for (j = i - 1;nums[j] > nums[0];j--)
						{
								nums[j+1] = nums[j];
						}
						nums[j+1] = nums[0];
				}
		}
}

