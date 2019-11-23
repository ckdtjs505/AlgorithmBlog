/*
	[포도주] boj.kr/2156
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n; cin >> n;
	int juice[10001] = {0};
	int dp[10001] = {0};
	for(int i = 1; i <= n ; i++){
		cin >> juice[i];
	}
	dp[1] = juice[1];
	dp[2] = juice[1] + juice[2];
	for(int i = 3; i <= n; i++){
		dp[i] = max(dp[i-2] + juice[i]	, dp[i-1]) ;
		dp[i] = max(dp[i-3] + juice[i-1] + juice[i], dp[i]);
	}

	cout << dp[n];
}

