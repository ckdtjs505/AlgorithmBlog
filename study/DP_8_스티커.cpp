/*
	[스티커] boj.kr/9465
*/

#include <iostream>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ary[2][100000];
		int dp[2][100000] = {0};
		
		for(int i = 0; i < 2; i++){
			for(int j = 1; j <= n; j++){
				dp[i][j] = 0;
			}
		}
		
		for(int i = 1; i <= n; i++){
			cin>> ary[0][i];
		}	
		for(int i = 1; i <= n; i++){
			cin>> ary[1][i];
		}
		
		dp[0][1] = ary[0][1]; dp[1][1] = ary[1][1];
				
		for(int i = 2; i <= n; i++){
			dp[0][i] = max(dp[1][i-1], dp[1][i-2]) +  ary[0][i];
			dp[1][i] = max(dp[0][i-1], dp[0][i-2]) +  ary[1][i]; 
		} 
		cout << max(dp[1][n], dp[0][n]) <<endl;
	}
}

