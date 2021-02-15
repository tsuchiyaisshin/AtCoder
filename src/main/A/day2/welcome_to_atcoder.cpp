#include "bits/stdc++.h"

using namespace std;

int read() {
	int n;
	scanf("%d", &n);
	return n;
}

int main() {
	int a = read();
	int b = read();
	int c = read();
	char d[100];
	scanf("%s", d);

	printf("%d %s\n", a+b+c, d);

	return 0;
}