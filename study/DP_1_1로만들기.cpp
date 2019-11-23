/*
	[1로 만들기] boj.kr/1463
*/

#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	int ary[n+1] = {0, 0, 1};
	for(int i = 3; i <= n; i++){
		ary[i] = ary[i-1] + 1;
		if( i % 3 == 0){
			ary[i] = min(ary[i/3]+1, ary[i]);
		} 
		if( i % 2 == 0 ){
			ary[i] = min(ary[i/2]+1, ary[i]);
		} 
		
	}
	cout << ary[n];
}
