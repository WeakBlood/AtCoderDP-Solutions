/* WeakBlood <3 */
#include <bits/stdc++.h>
#define ll long long int
#define INF 1e9
#define lINF 1e18
const int MOD = 1e9+7;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	#ifdef LOCAL
	ifstream cin("solution.txt");
	ifstream cin1("output.txt");
	#endif
	
	char a,b;
	while(cin >> a && cin1 >> b)
	{
		if(a != b) 
		{
			cout << "NO" << "\n";
			return 0;
		}
	}
	if(cin >> a || cin1 >> b)
	{
		cout << "NO" << "\n";
		return 0;
	}
	cout << "YES" << "\n";
		
	return 0;
}
