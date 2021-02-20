#include "bits/stdc++.h"

int main() {
	int max_count;
	scanf("%d", &max_count);

	int count = 0;
	int val_array[200];

	for (int i = 0; i < max_count; i++) {
	    int scan_val;
	    scanf("%d", &scan_val);
	    val_array[i] = scan_val;
	}

	bool is_shift = true;

	while(is_shift) {
	    	for (int i = 0; i < max_count; i++) {
        	    int mod = val_array[i] % 2;
        	    if (mod == 0) {
        	        val_array[i] = val_array[i] / 2;
        	    } else {
        	        is_shift = false;
        	    }
        	}
        	if(is_shift) {
        	    count++;
        	}
	}

	printf("%d\n", count);

	return 0;
}