/*
  
  [A+B -4] boj.kr/10951
  EOF���� �޴°��� �ٽ�!! 
  
	#include <iostream>
	using namespace std;
	int main(){
		while(1){
			int a,b;
			cin >> a >> b;
			cout << a+b << endl;
		} 
	}
  	
  	�� �ڵ��� ����� ��� �ʰ��� ���´�.
	�ֳ��ϸ� while���� ����ؼ� ���� �ֱ� �����̴�.
	
	 
*/

#include <iostream>
using namespace std;
int main(){
	int a,b;
	while(scanf("%d %d", &a, &b) != EOF){
		cout << a+b <<endl;
	}
}


