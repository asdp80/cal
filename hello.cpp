#include <stdio.h>

int main() {

	printf("���⸦ ������. \n");
	printf("1. ���ϱ�\n");
	printf("2. ����\n");
	printf("3. ���ϱ�\n");
	printf("4. ������\n");

	while (1) {
		int select = 0;
		double num1 = 0.0, num2 = 0.0;

		printf("���ϴ� �۾��� �����ϼ��� (1-4): ");
		scanf("%d", &select);

		if (select < 1 || select > 4) {
			printf("�߸��� �����Դϴ�. ���α׷��� �����մϴ�.\n");
			break;
		}

		printf("�Ǽ� �� ���� �Է��ϼ���: ");
		scanf("%lf %lf", &num1, &num2);

		switch (select) {
		case 1:
			printf("���ϱ⸦ �����մϴ�.\n");
			printf("�� ���� ���� %lf�Դϴ�.\n", num1 + num2);
			break;
		case 2:
			printf("���⸦ �����մϴ�.\n");
			printf("�� ���� ���� %lf�Դϴ�.\n", num1 - num2);
			break;
		case 3:
			printf("���ϱ⸦ �����մϴ�.\n");
			printf("�� ���� ���� %lf�Դϴ�.\n", num1 * num2);
			break;
		case 4:
			if (num2 == 0.0) {
				printf("0���� ���� �� �����ϴ�.\n");
			}
			else {
				printf("�����⸦ �����մϴ�.\n");
				printf("�� ���� ���� ����� %lf�Դϴ�.\n", num1 / num2);
			}
			break;
		}
	}

	return 0;
}
