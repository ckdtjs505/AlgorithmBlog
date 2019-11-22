/*
  [A+B -2] boj.kr/2558 
  getline 함수는 한줄을 읽는데 사용
  반드시 문자열만 읽을 수 있는 듯 하다. 
  
  
 	#include <iostream>
	using namespace std;
	int main(){
	  int a, b;
	  cin >> a >> b;
	  cout << a+b;
	}
   위와같이 제출해도 통과하는데; 
   이유가 뭘까? 
  
*/

#include <iostream>
using namespace std;
int main(){
	string a, b;
	getline(cin, a);
	getline(cin, b);
	cout << stoi(a)+stoi(b);	
}


