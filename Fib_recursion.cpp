#include<bits/stdc++.h>
using namespace std;
void Fib(int s,int e,int c)
{
	if(c==2) return;
	int temp = s+e;
	s = e;
	e = temp;
	cout<<temp<<" ";
	Fib(s,e,c-1);
}

int main()
{
	int c;
	cin>>c;
	cout<<0<<" "<<1<<" ";
	Fib(0,1,c);
}
