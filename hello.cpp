
#include <stdio.h>
int main() {
	
	printf("���⸦ ������ . \n");
	printf("1. ���ϱ� \n");
	printf("2. ���� \n");
	printf("3. ���ϱ� \n");
	printf("4. ������ \n");

	while (true)
	{
		int select =0;
		double num1 = 0.0; double num2=0.0;

		printf("���ϴ� �۾��� �����ϼ��� (1~4) : ");
		scanf_s("%d", &select);

		switch (select)
		{
		case 1:
			printf("���ϱ⸦ �����ϰڽ��ϴ�. \n");
			printf("������ �� ���� �Է��ϼ��� : ");
			scanf_s("%lf , %lf", &num1, &num2);
			printf("�� ���� ���� %lf �Դϴ�. \n", num1 + num2);
			break;
		case 2:
			printf("���⸦ �����ϰڽ��ϴ�. \n");
			printf("������ �� ���� �Է��ϼ��� : ");
			scanf_s("%lf , %lf", &num1, &num2);
			printf("�� ���� ����� %lf �Դϴ�. \n", num1 - num2);
			break;
		case 3:
			printf("���ϱ⸦ �����ϰڽ��ϴ�. \n");
			printf("������ �� ���� �Է��ϼ��� : ");
			scanf_s("%lf , %lf", &num1, &num2);
			printf("�� ���� ���ϱ�� %lf �Դϴ�. \n", num1 * num2);
			break;
		case 4:
			printf("�����⸦ �����ϰڽ��ϴ�. \n");
			printf("������ �� ���� �Է��ϼ��� : ");
			scanf_s("%lf , %lf", &num1, &num2);
			printf("�� ���� ���� %lf �Դϴ�. \n", num1 / num2);
			break;
		default:
			break;
		}

	}

	return 0;
}