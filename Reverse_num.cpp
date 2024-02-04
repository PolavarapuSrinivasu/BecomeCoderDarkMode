#include<bits/stdc++.h>
using namespace std;

int reverse(int n,int s)
{
	if(n==0) return s;
	s=s*10+(n%10);
	reverse(n/10,s);
}

int main()
{
	int n;
	cin>>n;
	cout<<reverse(n,0);
}
