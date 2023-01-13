#include <iostream>
using namespace std;
int main() {
	int t, ans, tmp, n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>ans;
		n *= 2;
		n--;
		while(n--)
		{
			cin>>tmp;
			ans &= tmp;
		}
		cout<<ans<<endl;
	}
}
