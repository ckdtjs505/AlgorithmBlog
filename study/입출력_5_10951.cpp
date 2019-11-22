/*
  
  [A+B -4] boj.kr/10951
  EOF까지 받는것이 핵심!! 
  
	#include <iostream>
	using namespace std;
	int main(){
		while(1){
			int a,b;
			cin >> a >> b;
			cout << a+b << endl;
		} 
	}
  	
  	위 코드의 결과는 출력 초과가 나온다.
	왜냐하면 while문이 계속해서 돌고 있기 때문이다.
	
	 
*/

#include <iostream>
using namespace std;
int main(){
	int a,b;
	while(scanf("%d %d", &a, &b) != EOF){
		cout << a+b <<endl;
	}
}


