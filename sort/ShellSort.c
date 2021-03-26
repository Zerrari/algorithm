#include "stdio.h"
#include <stdlib.h>

void ShellSort(int* nums,int len)
{
		int increment = len;
		int i,j;
		do {
		for (i = increment + 1;i < len;i++)
		{
				if (nums[i] < nums[i - increment])
				{
						nums[0] = nums[i];
						for (j = i - increment;j > 0 && nums[j] > nums[0];j = j - increment)
						{
								nums[j+increment] = nums[j];
						}
						nums[j+increment] = nums[0];
				}		
		}
		}while (increment > 1);
		return;
}


