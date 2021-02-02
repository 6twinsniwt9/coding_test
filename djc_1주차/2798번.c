#include <stdio.h>

int main() {
	int N = 0, M = 0, arr[500] = { 0, }, sum = 0, a = 0;
	scanf("%d %d",&N,&M);
	for (int i = 0;i < N;i++) scanf("%d", &arr[i]);
	for (int i = 0;i < N-2;i++) {
		for (int j = i+1;j < N - 1;j++) {
			for (int k = j + 1;k < N;k++) {
				sum = arr[i] + arr[j] + arr[k];
				if (sum <= M) {
					if (a < sum) a = sum;
				}
			}
		}
	}
	printf("%d", a);
}