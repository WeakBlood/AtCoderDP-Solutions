/* WeakBlood <3 */
#include <bits/stdc++.h>
#define ll long long int
#define INF 1e9
#define lINF 1e18
const int MOD = 1e9+7;
using namespace std;
int solve(int N,int states, const vector<vector<int>> &A){
	vector<vector<int>> memo(N+1,vector<int> (states,0));
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < states; j++){
			for(int k = 0; k < states; k++){
				if(j == k) continue;
				memo[i+1][k] = max(memo[i+1][k],memo[i][j] + A[i][j]);
			}
		}
	}
	int maxi = 0;
	for(int j = 0; j < states; j++){
		maxi = max(memo[N][j],maxi);
	}
	return maxi;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	#ifdef LOCAL
	ifstream cin("input.txt");
	#endif
	
	int N;
	int states = 3;
	cin >> N;
	vector<vector<int>> A(N,vector<int>(states));
	for(int i = 0; i < N; i++){
		for(int j = 0; j < states; j++) cin >> A[i][j];
	}
	cout << solve(N,states,A) << "\n";
	return 0;
}
