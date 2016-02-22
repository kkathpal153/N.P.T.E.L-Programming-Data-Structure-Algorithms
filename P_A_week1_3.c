/*Write a C program that takes a positive number N and produces an output that is the product of its digits.

Explanation:
Take number 657.
Answer expected : 6 * 5 * 7 = 210

Constraint:
1<=N<=999999
Input: A single number
Output:  The value
Example 1:
Input: 657
Output: 210
Example 2:
Input: 7
Output: 7*/

#include<stdio.h>
int main()
{
	int i,j,k,l,m,n,a;
	scanf("%d",a);
	int aa=1;
	while(a!=0)
	{
		k=a/10;
		a=a%10;
		aa=aa*k;
	}
	printf("%d",aa);
	return 0;
}
