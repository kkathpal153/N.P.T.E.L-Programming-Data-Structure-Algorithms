/*
Selection sort is a sorting algorithm that sorts n elements in an array using n-1 calls of a procedure called Select() . Select(i) selects the smallest of the elements from positions i+1 to n and swaps with the element at i. 

Given a list of unsorted elements having N numbers, print the array  of elements after K calls to Select() starting with Select(1) as the first call and Select(K) as the last call with increasing order of parameters to Select().

Input:
N
K
m1 m2 m3 .. mN (Space separated)
(where mi's are elements of unsorted list)

Output:
Space separated list of N numbers after K calls to of Select().

Constraint:
2<= N <= 100
1<= K <= (N-1)
Numbers will be given in the range [-1000,1000].

Example 1:
5
1
9 8 7 6 5 

Expected Output: 
5 8 7 6 9

Explanation:
After the 1st call of Select(),  the smallest element will be selected(which is 5) and will be swapped with element at first position (which is 9). 

Example 2:
5
2
3 9 8 7 1

Expected Output:
1 3 8 7 9

Explanation:
After the 1st call to Select(), the smallest element which is 1 should get to the 1st position. To do so, it is swapped with 3 resulting in the intermediate result

1 9 8 7 3

After 2nd call, the next smallest element 3 should be at 2nd position. To do so, 3 is swapped with 9. Thus the expected result

3 9 8 7 1*/
#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void printSelectSortIter(int arr[], int n, int k)
{
 
 int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < k; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    } 
    for(i=0;i<n-1;i++)
    printf("%d ",arr[i]);printf("%d ",arr[i]);
}





int main() {
    int arr[101], n, k, i;
    scanf("%d", &n); //taking n from user
    scanf("%d", &k);	//taking k from user
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);	//scanning elements
    printSelectSortIter(arr,n,k);
	return 0;
}
