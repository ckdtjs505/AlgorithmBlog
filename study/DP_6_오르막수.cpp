/*
	[오르막수] boj.kr/11057
*/

#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	long long ary[1001][10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	for(int i = 1; i < 1001; i++){
		for(int j = 0; j < 10; j++){
			for(int k = 0; k <= j; k++){
				ary[i][j] += (ary[i-1][j-k] % 10007);
			}
		} 
	}
	long long ans = 0;
	for(int i = 0; i < 10; i++){
		ans += ary[n-1][i];
	}
	cout << ans % 10007; 
	
}
