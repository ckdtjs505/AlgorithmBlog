/*
	[2xn 타일링 2] boj.kr/11727
*/

#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	int ary[n+1] = {0, 1, 3};
	for(int i = 3; i <= n; i++){
		ary[i] = (ary[i-1] + ary[i-2]*2) % 10007;		
	}
	cout << ary[n];
}
