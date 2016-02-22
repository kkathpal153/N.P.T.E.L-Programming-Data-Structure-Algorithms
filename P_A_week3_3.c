/*
Your college is organising a sporting event. The events are all done and now the task is to prepare the list of medal winners. The sports secretary for some reason assumed that the events will only have Gold and Silver medals but no Bronze medals. The contestants, especially the 3rd place winners were furious (understandably so!). To get things in control the secretary gives you the list of participants in an event and their standing in the event. Your task is to output the list of Bronze medalists in each of the events.

Each event has 10 participants. 

Input:  The number of test cases T followed by T lines. Each line has  10 numbers that indicate the time taken by each contestant to complete the task. Each task takes less than or equal to 30 seconds. If there are two bronze winners, print the one with the lower id.

Output: The id of the contestant who secured the Bronze medal.

Example:
Input
1
16 12 34 11 10 5 3 1 15 21
Output
6

Explanation: The 1 in first line indicates that there is only one testcase. The third position is for the player who took 5 sec to finish the task. The player is in the 6th person in the input list. Note that the ids start at 1 and not at 0.*/

#include<stdio.h>
int sort(int a[])
{   int i,j,k;
    int b[10];
    for(i=0;i<10;i++)
    b[i]=a[i];
	for(j=1;j<10;j++)
	for(i=0;i<10-j;i++)
	if(a[i]>a[i+1])
	{
		k=a[i];
		a[i]=a[i+1];
		a[i+1]=k;
	}/*
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");*/
	for(i=0;i<10;i++)
    if(a[2]==b[i])
	return i+1;
}
int main()
{   int n;
    scanf("%d",&n);
	int a[n][11],b[n],aa,bb,cc,i,j,k,l,m;
	for(i=0;i<n;i++)
	for(j=0;j<10;j++)
	scanf("%d",&a[i][j]);
	
	for(i=0;i<n;i++)
	{
	   b[i]=sort(a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d\n",b[i]);
	}
	printf("%d",b[n-1]);
	
    }
	
