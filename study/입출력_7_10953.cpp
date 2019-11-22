/*
  [A+B -6] boj.kr/10953
  scanf 응용하기 
*/

#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		int a, b;
		scanf("%d,%d",&a,&b);
		cout<< a+b <<endl;
	}
}


