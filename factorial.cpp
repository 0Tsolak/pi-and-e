#include "hider.hpp"

long double factorial (int n){
	long double pat = 1;
	if (n==0){
		return 1;
	} else {
	for (int i=1; i<=n; i++) {
		pat = pat * i;
	}
	return pat;
	}
}
