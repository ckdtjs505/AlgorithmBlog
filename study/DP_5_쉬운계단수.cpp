/*
	[쉬운 계단 수] boj.kr/10844
*/

#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	long long ary[101][10] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	for(int i = 1; i < 101; i++){
		for(int j = 0; j < 10; j++){
			if(j == 0){
				ary[i][j] = ary[i-1][j+1];
			}else if( j == 9){
				ary[i][j] = ary[i-1][j-1];
			}else{
				ary[i][j] = (ary[i-1][j-1] + ary[i-1][j+1]) % 1000000000;
			} 		
		} 
	}
	long long ans = 0;
	for(int i = 0; i < 10; i++){
		ans += ary[n-1][i];
	}
	cout << ans % 1000000000; 
	
}
