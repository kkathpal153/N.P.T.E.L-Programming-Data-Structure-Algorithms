/*
You are given a sorted list of N numbers and a number Num. Write a program to find the five numbers that are closest (numerically) to Num. A number x in the array is closest to Num if |Num-x| is the smallest among all such x possible.

Note: If the Num is present in given list, then it should be in the output.

Constraints:
        5 < N <20
        All numbers in list are between -10000 to 10000
        -10000 <Num< 10000
        There could be numbers that are repeated
Input:        
    N Num
    m1 m2 m3 .. mN
where mi's are N numbers in sorted order.

Output:
    p1 p2 p3 p4 p5
where pi's are closest numbers in increasing order of absolute difference from Num. If there are two numbers with same difference, print the larger one first.

There should be a space between each element but no space or newline at the end of the output sequence.
*/
#include<stdio.h>
#define MAXSIZE 20

void printclosest(int arr[], int num, int n){


int b[n+1],a[n+1],d[5];

int i,j,k,l,m,s,r,sml;
k=num;
for(i=0;i<n;i++) // calculating the difference
	{b[i]=k-arr[i];
	 a[i]=arr[i];
	 
	 if(b[i]<0)
	 b[i]=b[i]*-1; 
   }
   s=b[0];
   for(i=0;i<n;i++) // for calculating the smallest difference
	   {
	   	if(s>=b[i])
	   	  {s=b[i]; sml=i; }
	   }
	b[n]=99999;
    l=sml-1; r=sml;
	int dd=0;
	while(dd<5)
	{   
		if(b[r]<=b[l<0?n:l]&&r<n)
			{ d[dd]=a[r];
             dd++;
		     r++;
			}
		else if(l>=0)
		  {
		  	d[dd]=a[l];l--;
		  	dd++;
		  }
	}
	for(i=0;i<4;i++)
	printf("%d ",d[i]);
	printf("%d",d[i]);	
}

int main()
{
  int arr[MAXSIZE];
  int i,n,num;
  scanf("%d %d",&n,&num);
  for (i = 0; i < n; ++i)
	{
  	scanf("%d",&arr[i]);
	}
  printclosest(arr, num, n);
  return 0;
}
