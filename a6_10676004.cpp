

#include <stdio.h>

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
//This program requires that the element to be searched   should  be entered in the source code
int b_Search(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int middle = l + (r - l) / 2;

		if (arr[middle] == x)
			return middle;

		if (arr[middle] > x)
			return b_Search(arr, l, middle - 1, x);


		return b_Search(arr, middle + 1, r, x);
	}


	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = b_Search(arr, 0, n - 1, x);
	(result == -1) ? printf("Element is not present in array")
				: printf("Element is present at index %d",
							result);
	return 0;
}
