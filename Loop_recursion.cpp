#include<bits/stdc++.h>
using namespace std;

void Permutations(string a, int start, int end)
{
	if(start >= end){
		cout<<a<<endl;
		return;
	}
	for(int i = start ; i<= end ; i++)
	{
		swap(a[start],a[i]);
		Permutations(a,start+1,end);
		swap(a[start],a[i]);
	}
}

int main(){
	string a;
	cin>>a;
	Permutations(a,0,a.size()-1);
}
