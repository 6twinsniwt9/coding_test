#include <stdio.h>
int main() {
	int N = 0, weight[50] = { 0, }, tall[50] = { 0, };
	scanf("%d", &N);
	for (int i = 0;i < N;i++) {
		scanf("%d %d", &weight[i], &tall[i]);
	}
	for (int i = 0; i < N; i++) {
		int rank = 1;
		for (int j = 0; j < N; j++) {
			if (weight[i] < weight[j] && tall[i] < tall[j]) rank++;
		}
		printf("%d ", rank);
	}
}