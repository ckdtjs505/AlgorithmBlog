/*
  [그대로 출력하기2] boj.kr/11719
  getline 공백포함 한줄한줄 출력해주는 함수이다.! 
*/

#include <iostream>
using namespace std;
int main(){
	string s;
	while(getline(cin,s)){
		cout << s << endl;
	}
}


