/*
  [A+B -2] boj.kr/2558 
  getline �Լ��� ������ �дµ� ���
  �ݵ�� ���ڿ��� ���� �� �ִ� �� �ϴ�. 
  
  
 	#include <iostream>
	using namespace std;
	int main(){
	  int a, b;
	  cin >> a >> b;
	  cout << a+b;
	}
   ���Ͱ��� �����ص� ����ϴµ�; 
   ������ ����? 
  
*/

#include <iostream>
using namespace std;
int main(){
	string a, b;
	getline(cin, a);
	getline(cin, b);
	cout << stoi(a)+stoi(b);	
}


