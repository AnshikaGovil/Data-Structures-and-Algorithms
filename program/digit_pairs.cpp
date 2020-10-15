#include<iostream>
using namespace std;
int bit_score(int n)
{
	int a, b, c, largest, smallest;
	int s;
	a = n%10;
	n/=10;
	b = n%10;
	n/=10;
	c = n%10;
	n/=10;
	largest = (a>b)?a:b;
	largest = (c>largest)?c:largest;
	smallest = (a<b)?a:b;
	smallest = (c<smallest)?c:smallest;
	s = (largest*11 + smallest*7)%100;
	return s;
}
int Pairs(int score[], int n)
{
	int sig[10]={0},pair=0,msb;
	for(int i=0; i<n; i=i+2)
	{
		msb=score[i]/10;
        for(int j =i+2;j<n;j=j+2)
		{
            if(msb == score[j]/10)
			{
                if(sig[msb] < 2)
	        		sig[msb]++;
            }
        }
		
	}
    for(int i=1; i<n; i=i+2)
	{
		msb = score[i] / 10;
		for(int j =i+2; j<n; j=j+2)
		{
            if(msb == score[j]/10)
			{
                if(sig[msb] < 2)
	        		sig[msb]++;
            }
        }
	}
	for(int i=0; i<10; i++)	
		pair+= sig[i];
	return pair;
}
int main()
{
	int n,p;
	int a[501];
	int score[501];
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<n; i++)
		score[i] = bit_score(a[i]);
	p = Pairs(score, n);
	cout<<p;
	return 0;
}
