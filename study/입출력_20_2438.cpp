/*
  [����� - 3] boj.kr/2440
*/

#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = n; j > i; j-- ){
			printf("*");
		}
		printf("\n");
	}
}
