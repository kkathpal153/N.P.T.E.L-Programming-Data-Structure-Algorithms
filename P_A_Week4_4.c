/*
Given an array of unique numbers and a value, a valid triplet is a set of three numbers (not necessarily continuous in the array) that add up to the value. Write a program to count all valid triplets. Print the number of  valid triplets.

Hint: Can you solve this in O(n^2) steps?

Input : First line contains N and Sum (Space separated). Second line contains space separated list of N numbers.
Output: Number of triplets such that  sum possible

Constraints:
 0 < N < 100
All numbers in the list are unique and between -10^4 to 10^4
-10^3 < Sum < 10^3
*/
#include<stdio.h>

int main()
{
	int i,j,k,l,m,n,g,s;
	scanf("%d %d",&n,&s);
	int a[n];
	for(i=0;i<n;i++)
    scanf("%d" ,&a[i]);
    
	//mergesort(a,0,n-1);
	l=0;
	for(i=0;i<n-2;i++)
	for(j=i+1;j<n-1;j++)
	for(k=j+1;k<n;k++)
	if(a[i]+a[j]+a[k]==s)
	l++;
	
	printf("%d",l);
}
