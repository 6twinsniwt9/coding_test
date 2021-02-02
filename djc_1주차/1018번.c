#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char chess[50][50], white_chess[8][8], black_chess[8][8];

int chess_marker(int k, int m) {
	int white_marker = 0, black_marker = 0;
	char white_chess[8][8] = { {"WBWBWBWB"},{"BWBWBWBW"},{"WBWBWBWB"},{"BWBWBWBW"} ,{"WBWBWBWB"},{"BWBWBWBW"} ,{"WBWBWBWB"},{"BWBWBWBW"} };
	char black_chess[8][8] = { {"BWBWBWBW"} ,{"WBWBWBWB"} ,{"BWBWBWBW"} ,{"WBWBWBWB"} ,{"BWBWBWBW"} ,{"WBWBWBWB"} ,{"BWBWBWBW"},{"WBWBWBWB"} };

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (chess[k + i][m + j] != white_chess[i][j]) white_marker++;
			if (chess[k + i][m + j] != black_chess[i][j]) black_marker++;
		}
	}
	if (white_marker > black_marker)
		return black_marker;
	else
		return white_marker;
}

int main() {
	int length = 0, width = 0, white_marker = 0, black_marker = 0, smallest = 100;
	scanf("%d %d", &length, &width);
	for (int i = 0; i < length; i++) {
		//for (int j = 0; j < width; j++) scanf("%c", &chess[i][j]); //이 줄 자체를 scanf("%s",chess[i]);로 바꾸면 잘 작동합니다..!
		// 앞에서 입력의 마지막으로 입력된 공백문자(줄바꿈문자)를 무시하기 위해서 scanf(" %c", &chess[i][j]) 로 합니다.
		for (int j = 0; j < width; j++) {
			if (j == 0) scanf(" %c", &chess[i][j]);
			else        scanf("%c", &chess[i][j]);
		}
	}
	for (int k = 0; k < length - 8 + 1; k++) {
		for (int m = 0; m < width - 8 + 1; m++) {
			if (chess_marker(k, m) < smallest) smallest = chess_marker(k, m);
		}
	}
	printf("%d", smallest);

}
/*scanf로 입력을 받을 때 주의해야 할 것 중 하나가 공백문자(스패이스, 줄바꿈)처리 입니다.

scanf는 입력의 끝을 줄바꿈 문자로 생각하기 때문에, 줄바꿈 문자는 입력이 되지 않은채로 그대로 남게 됩니다.

단, 문자를 입력받는 경우인 scanf("%c")는 줄바꿈 문자를 입력의 끝이 아닌, 입력 그 자체로 받게 됩니다.

​

따라서, scanf("%d %d", &length, &width)를 통해 입력을 받았지만, 다음의 보드판 입력을 받는 scanf("%c", &chess[i][j])에서 앞에서 입력받지 못한 줄바꿈 문자를 입력으로 받게 됩니다. 그래서 원하지 않는 결과를 얻게 됩니다.

​

scanf("%s")를 통해서 입력을 잘 받을 수 있었던 이유는 줄바꿈 문자 단위로 문자열이 구분이 되기 때문에, scanf("%d %d")에서 입력받지 못한 줄바꿈 문자를 구분단위로 인지하여 입력받기 때문입니다.
*/