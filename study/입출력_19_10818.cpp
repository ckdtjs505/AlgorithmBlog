/*
  [최소,최대] boj.kr/1081
*/

#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	int ary[n]; 
	int maxValue = -1000000, minValue = 1000000;
	for(int i = 0 ; i < n; i++){
		scanf("%d", &ary[i]);
		maxValue = max(maxValue, ary[i]);
		minValue = min(minValue, ary[i]);
	}
	printf("%d %d", minValue, maxValue);
}
