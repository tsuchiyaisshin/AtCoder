#include "bits/stdc++.h"

int read() {
	int n;
	scanf("%d", &n);
	return n;
}

int main() {
    int a = read();
    int b = read();
    puts((a * b) % 2 == 1 ? "Odd" : "Even");
    return 0;
}