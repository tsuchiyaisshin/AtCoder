#include "bits/stdc++.h"

int read() {
	int n;
	scanf("%d", &n);
	return n;
}

int main() {
	int v = read();
	int t = read();
	int s = read();
	int d = read();
	puts(d < v * t || d > v * s ? "Yes" : "No");

	return 0;
}