/* WeakBlood <3 */
#include <bits/stdc++.h>
#define ll long long int
#define INF 1e9
#define lINF 1e18
const int MOD = 1e9+7;
using namespace std;

int solve(int N, int *arr){
	vector<int> memo(N,INF);
	memo[0] = 0;
	int JUMPS = 2;
	for(int i = 0; i < N; i++){
		for(int j = 1; j <= JUMPS && i+j < N; j++){
			int dist = abs(arr[i] - arr[i+j]);
			memo[i+j] = min(memo[i+j],memo[i] + dist);
		}
	}
	return memo[N-1];
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	#ifdef LOCAL
	ifstream cin("input.txt");
	#endif
	
	int N;
	cin >> N;
	int arr[N];
	for(int i = 0; i < N; i++) cin >> arr[i];
	
	cout << solve(N,arr) << "\n";
	return 0;
}
