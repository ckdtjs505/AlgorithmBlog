/*
	[2xn 타일링] boj.kr/11726
*/

#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	int ary[n+1] = {0, 1, 2};
	for(int i = 3; i <= n; i++){
		ary[i] = (ary[i-1] + ary[i-2]) % 10007;		
	}
	cout << ary[n];
}
