#include <stdio.h>
int main() {
	int i = 0, N = 0, arr[500] = { 0, };
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		int a = 0, b = 0;
		scanf("%d %d", &a, &b);
		arr[i] = a + b;
}
	for (i = 0;i < N;i++) {
		printf("%d\n", arr[i]);
	}
}