#include<bits/stdc++.h>
using namespace std;

int fact(int n,int a)
{
	if(n==1) return a;
	fact(n-1,a*n);
}

int main()
{
	int n;
	cin>>n;
	cout<<fact(n,1);
}
