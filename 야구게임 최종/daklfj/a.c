#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#pragma warning(disable:4996)
int main() {
	int check = 0;
	while (check == 0) {
		system("cls");
		int com[3];//��ǻ�Ͱ� �����ϴ� ���� �������� �߻��� ��
		int user[3];//������ �Է��ϴ¼�
		int strike = 0;
		int ball = 0;
		srand((unsigned)time(0));
		for (int i = 0; i < 3; i++) {
			com[i] = rand() % 10;//0~9
			for (int j = 0; j < i; j++)
				if (com[i] == com[j])i--;
		}
		for (int z = 1; z <= 20; z++) {
			printf("%d��° �� �Է� : ", z);
			for (int i = 0; i < 3; i++)
				scanf("%d", &user[i]);
			for (int i = 0; i < 3; i++) {
				if (com[i] == user[i])strike++;
				for (int j = 0; j < 3; j++) {
					if (com[i] == user[j]) ball++;
				}
			}
			ball = ball - strike;
			//printf("%d ��Ʈ����ũ\n", strike);
			if (strike == 3) { printf("correct\n"); break; }
			else if (strike + ball == 0)printf("out\n");
			else {
				printf("%d strike\n", strike);
				printf("%d ball\n", ball);
				ball = 0;
				strike = 0;
			}
		}
		if (strike == 3) {
			system("cls");
			printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
			printf("!!!!!!!!!!����!!!!!!!!!!\n");
			printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
			printf("�� ���߾�� ¦¦\n");
		}
		else {
			printf("���� : ");
			for (int i = 0; i < 3; i++)printf("%d ", com[i]);
			printf("\n");

		}
		printf("��� �ҷ��� 0\n�׸��ҷ��� �ƹ� ���� : ");
		scanf("%d", &check);
	}
}