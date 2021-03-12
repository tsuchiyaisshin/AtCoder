#include "bits/stdc++.h"

int main() {
	char val[3];
	int count = 0;
	scanf("%s", val);

	for (int i = 0; i < 3; i++) {
	    if (val[i] == '1') {
	        count++;
	    }
	}

	printf("%d\n", count);
	return 0;
}