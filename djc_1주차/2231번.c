#include <stdio.h>
int main() {
	int input= 0, part=0;
	scanf("%d", &input);
	while (input != part + part / 100000 + (part % 100000) / 10000 + (part % 10000) / 1000 + (part % 1000) / 100 + (part % 100) / 10 + part % 10 && part<=1000001) part++;
	if (part > input) part = 0;
	printf("%d", part);
}

