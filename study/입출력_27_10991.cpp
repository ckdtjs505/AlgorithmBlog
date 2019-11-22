/*
  [º°Âï±â - 16] boj.kr/10991
*/

#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = n-1; j > i; j-- ){
			printf(" ");
		}
		printf("*");
		for(int j = 0; j < i * 2 - 1; j++ ){
			if( i == n-1)
				printf("*");
			else 
				printf(" ");
				
		}
		if(i >= 1) printf("*");
		printf("\n");
	}
}
