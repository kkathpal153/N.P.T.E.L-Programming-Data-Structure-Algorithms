#include<stdio.h>
#include<iostream>
using namespace std;
/* function to calculate power x^y */
int power(int x, int y){
  int pow=1;
  while (y!=0){
      pow*=x;
      y--;
    }
  return pow;
}
int main()
{
	int n,x,s=0,i;
	scanf("%d%d",&n,&x);
	int c[17];
	for(i=1;i<=n+1;i++)
	{scanf("%d",&c[i]);
    }
	
	for(i=1;i<=n+1;i++)
	{
		cout<<c[i]*power(x,n+1-i);
		
	}
	printf("%s",s);
	return 0;
}
