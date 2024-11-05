#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int str[8][6] = { {0,0,0,0,0,0},  // A
					  {0,0,1,1,1,1},  // B
					  {0,1,0,0,1,1},  // C
					  {0,1,1,1,0,0},  // D
					  {1,0,0,1,1,0},  // E
					  {1,0,1,0,0,1},  // F
					  {1,1,0,1,0,1},  // G
					  {1,1,1,0,1,0} }; // H
	char ch[8] = { 'A','B','C','D','E','F','G','H' };
	int cnt = 0, check = 0;
	int alp[10];
	int arr[10][7];
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < 6; j++)
			scanf("%01d", &arr[i][j]);

	for (int k = 0; k < N; k++) {
		for (int i = 0; i < 8; i++) {
			cnt = 0;
			for (int j = 0; j < 6; j++) {
				if (arr[k][j] != str[i][j])
					cnt++;
			}
			if (cnt <= 1) {
				alp[k] = i;
				break;
			}
			if (i == 7)
				check = k + 1;
		}
		if (check != 0) break;
	}
	if (check == 0) {
		for (int i = 0; i < N; i++)
			printf("%c", ch[alp[i]]);
	}
	else
		printf("%d", check);
	return 0;
}