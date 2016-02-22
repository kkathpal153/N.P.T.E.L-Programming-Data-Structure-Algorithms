/*Write an efficient C program to find the largest sum of contiguous subarray within an one-dimensional array of integers.  A contiguous subarray of an array is defined as the sequence of elements that are in any continuous set of indices that are valid within an array.

Lets take an example of an array {5,-3, 4}. Possible contiguous subarray combinations are {5}, {-3}, {4}, {5,-3}, {-3,4} and {5,-3,4}. Note that {5,4} is not a valid subarray as the indices of 5 and 4 are not continuous.

The contiguous subarray  {5,-3,4} has the largest sum 6. 

Input Constraints:
	First line : array size (N), where 1<= N<=100
	Second line : N integers separated by spaces 
	where each number Ni satisfies
	-10000 <= Ni <=10000
	   
Output Constraints:
	Single integer SUM which is the largest sum of all possible contiguous subarrays.
	*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,n;
	char a[103],b[103];
	scanf("%s",a);
	int aa=strlen(a);
	int s=0;
    for(i=0;i<aa;i++)
    {
    	if(a[i]>=97&&a[i]<=122)
    	printf("%d ",s);
    	else if(a[i]=='(')
    	s++;
    	else if(a[i]==')')
    	s--;
	}
	printf("#");
	return 0;
	
}
