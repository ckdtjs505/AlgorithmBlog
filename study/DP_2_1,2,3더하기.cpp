/*
	[1,2,3 더하기] boj.kr/9095
*/

#include <iostream>
using namespace std;
int main(){
	int size; cin >> size;
	int ary[11] = { 0, 1, 2, 4};
	for(int i = 4; i < 11; i++){
		ary[i] = ary[i-1] + ary[i-2] + ary[i-3]; 
	}
	while(size--){
		int n; cin >> n; 
		cout << ary[n] <<endl;
	}
}
