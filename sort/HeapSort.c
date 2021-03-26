#include <stdio.h>
#include <stdlib.h>

void swap(int* nums,int a,int b)
{
		int tmp = nums[a];
		nums[a] = nums[b];
		nums[b] = tmp;
		return;
}

void HeapAjust(int* nums,int i,int len)
{
		int tmp = nums[i];
		for (int j = i*2;j < len;j = j*2)
		{
				if (j < len-1 && nums[j] < nums[j+1])
						j++;
				if (tmp >= nums[j])
						break;
				nums[i] = nums[j];
				i = j;
		}
		nums[i] = tmp;
		return;
}



void HeapSort(int* nums,int len)
{
		for (int i = len/2;i >=0;i++)
		{
				HeapAjust(nums,i,len);
		}
		for (int i = len-1;i > 0;i--)
		{
				swap(nums,1,i);
				HeapAjust(nums, 0, i);
		}
		return;
}
