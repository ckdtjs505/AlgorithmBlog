/*
  [2007³â] boj.kr/1924
*/

#include <iostream>
using namespace std;
int main(){
	int x,y; cin>>x >> y;
	int ary[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int temp = y;
	for(int i = 0; i < x; i++){
		temp += ary[i];
	} 
	switch( temp % 7){
		case 0: printf("SUN"); break;
		case 1: printf("MON"); break;
		case 2: printf("TUE"); break;
		case 3: printf("WED"); break;
		case 4: printf("THU"); break;
		case 5: printf("FRI"); break;
		case 6: printf("SAT"); break;
	}
}


