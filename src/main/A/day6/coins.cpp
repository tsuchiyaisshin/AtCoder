#include "bits/stdc++.h"

int read() {
	int n;
	scanf("%d", &n);
	return n;
}

int main() {
    int five_hundred = read();
    int one_hundred = read();
    int fifty = read();
    int money = read();

    int ans = 0;

    for (int i = 0; i <= five_hundred; i++) {
        for(int j = 0; j <= one_hundred; j++) {
            for (int k = 0; k <= fifty; k++) {
                int total = 500 * i + 100 * j + 50 * k;
                if (total == money) {
                    ans++;
                }
            }
        }
    }

    printf("%d\n", ans);

	return 0;
}