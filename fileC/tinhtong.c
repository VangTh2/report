#include<stdio.h>
int tinhtongchan(int n)
{
  int tong=0;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			tong=tong+i;
		}
      	}
	return tong;
}
