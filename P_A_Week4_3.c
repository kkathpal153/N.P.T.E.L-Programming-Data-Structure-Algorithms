/*
You are given a polynomial of degree n. The polynomial is of the form P(x) = anxn + an-1xn-1 + … + a0. For given values k and m, You are required to find P(k) at the end of the mth iteration of Horner’s rule. 

The steps involved in the Horner’s rule are given below,
 
Pn (x) = an
Pn-1 (x) = an-1 + x * Pn (x)                              1st iteration.
Pn-2 (x) = an-2 + x * Pn-1 (x)                           2nd iteration.
.
.
P0 (x) = a0 + x * P1 (x)                                     nth iteration.
 
In general, Pi (x) = ai + x * Pi + 1 (x) and P0(x) is the final result. 
 
Input
n m k
	   an an-1 …. a0 
(Space separated)
 
Output: P(k) value at the end of the mth iteration.
 
Sample Input:
2 2 5
3 2 1
 
Sample Output:
86
 
Constraints:
1 <= n, k, m <= 10
  0 <= ai <=10*/
  #include<stdio.h>
int main()
{
	int i,j,k,l,m,n;
	int a[12],v[12];
	scanf("%d %d %d",&n,&m,&k);
	for(i=0;i<n+1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int s=a[0];
	for(i=1;i<=m;i++)
	{
		s=s*k+a[i];
		
	}
	printf("%d",s);
	return 0;
	
}
