/*
  [A+B -5] boj.kr/10952
*/

#include <iostream>
using namespace std;
int main(){
	int a,b;
	while(scanf("%d %d", &a, &b) != EOF){
		if(a == 0 && b == 0)
			break; 
		cout << a+b <<endl;
	}
}


