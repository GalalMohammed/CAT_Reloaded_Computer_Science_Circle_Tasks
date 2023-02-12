#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k;
	long long int q, power;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k>>s;
	    q = 0;
	    power = 0;
	    vector<int> c(n - 1);
        for(int i = 0; i < n - 1; i++)
        {
            if(s[i] != s[i + 1])
            c[i] = 1;
            else
            c[i] = 0;
        }
        for(int i = 0; i < k; i++)
        q += c[i];
        power += q;
        for(int i = 1; i < n - k; i++)
        {
            q -= c[i - 1];
            q += c[i + k - 1];
            power += q;
        }
	    cout<<power<<endl;
	}
	return 0;
}
