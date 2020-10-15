#include<iostream>
using namespace std;
int combinations(int r, int c)
{
	int count=0;
	while(r && c)
	{
		count++;
		if(r>c)
			r-=c;
		else
			c-=r;
	}
	return count;
}
int main()
{
	int minlength, maxlength, minwidth, maxwidth;
	cin>>minlength>>maxlength>>minwidth>>maxwidth;
	int res=0;
	if((0<minlength<1501)&& (0<maxlength<1501)&& (0<minwidth<1501)&& (0<minwidth<1501))
	{
		for(int i= minlength;i<=maxlength;i++)
		{
			for(int j=minwidth;j<=maxwidth;j++)
				res+= combinations(i,j);
		}
		
	}
	cout<<res;
	return 0;
}
