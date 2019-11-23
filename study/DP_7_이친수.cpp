/*
	[이친수] boj.kr/2193
*/

#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	long long ary[91][2] = { {0, 0}, {0, 1}};
	for(int i = 2; i < 91; i++){
		ary[i][0] = ary[i-1][0] + ary[i-1][1];
		ary[i][1] = ary[i-1][0]; 
	}
	cout << ary[n][0] + ary[n][1]; 
}
