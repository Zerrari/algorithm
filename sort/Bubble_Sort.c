#include "stdio.h"
#include <stdlib.h>

void swap(int* nums,int i,int j)
{
		int tmp = nums[i];
		nums[i] = nums[j];
		nums[j] = nums[i];
		return;
}

void BubbleSort(int* nums,int len)
{
		int i,j;
		int tmp;
		for (i = 0;i < len;i++)
		{
				for (j = i + 1;j < len;j++)
				{
						if (nums[i] > nums[j])
								swap(nums, i, j);
				}
		}
		return;
}

// Better Solution

void Better_BubbleSort(int* nums,int len)
{
		int i,j;
		for (i = 0;i < len;i++)
		{
				for (j = len - 1;j >= i;j--)
				{
						if (nums[j] > nums[j+1])
								swap(nums, j, j+1);
				}
		}
		return;
}

// Set flag to check if the array has been sorted.

void Flag_BubbleSort(int* nums,int len)
{
		int flag;
		int i,j;
		for (i = 0;i < len;i++)
		{
				for (j = len - 1;j >= i;j--)
				{
						flag = 1;
						if (nums[j] > nums[j+1])
						{
								flag = 0;
								swap(nums, j, j+1);
						}
						if (flag == 1)
								return;
				}
		}
		return;
}


