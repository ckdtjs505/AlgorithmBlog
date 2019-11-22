/*
  [숫자의합] boj.kr/11720
  
  scanf("%1d",)를 사용하면 훨씬 쉽게사용가능 
*/

#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	string s; cin >> s;
	int sum = 0;
	for(int i = 0 ; i < n; i++){
		sum += s[i]-48;
	}
	printf("%d",sum);
}


