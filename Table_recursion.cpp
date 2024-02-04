#include<bits/stdc++.h>
using namespace std;
void table(int a,int b,int n)
{
	if(n>b) return;
	cout<<a<<" X "<<n<<" = "<<a*n<<endl;
	table(a,b,n+1);
}
int main()
{
	int a,b;
	cin>>a>>b;
	table(a,b,1);
}
