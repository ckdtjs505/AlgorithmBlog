/*
  [열 개씩 끊어 출력하기] boj.kr/11721
  
*/

#include <iostream>
using namespace std;
int main(){
	string n; cin >> n;
	for(int i = 0; i< n.length() ;i++){
		cout << n[i];
		if(i % 10 == 9)
			cout << "\n";
	} 
}


