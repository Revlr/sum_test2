#include "sum.h"

int sum(int n){
	int res=0;
	int i;
	for(i = 0; i <= n; i++){
		res +=i;
	}
	return res;
}

