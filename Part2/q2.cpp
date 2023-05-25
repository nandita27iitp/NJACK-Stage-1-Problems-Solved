#include <bits/stdc++.h>

using namespace std;

int main()
{
	int w;
	cin>>w;
	
	if (w%2 != 0) cout<<"\nNO";
	else {
		if(w == 1 || w == 2) cout<<"\nNO";
		else cout<<"\nYES";
	}
	return 0;
}
	
