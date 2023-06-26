#include <stdio.h>

int main() {

	printf("계산기를 만들어보죠. \n");
	printf("1. 더하기\n");
	printf("2. 빼기\n");
	printf("3. 곱하기\n");
	printf("4. 나누기\n");

	while (1) {
		int select = 0;
		double num1 = 0.0, num2 = 0.0;

		printf("원하는 작업을 선택하세요 (1-4): ");
		scanf("%d", &select);

		if (select < 1 || select > 4) {
			printf("잘못된 선택입니다. 프로그램을 종료합니다.\n");
			break;
		}

		printf("실수 두 개를 입력하세요: ");
		scanf("%lf %lf", &num1, &num2);

		switch (select) {
		case 1:
			printf("더하기를 실행합니다.\n");
			printf("두 수의 합은 %lf입니다.\n", num1 + num2);
			break;
		case 2:
			printf("빼기를 실행합니다.\n");
			printf("두 수의 차는 %lf입니다.\n", num1 - num2);
			break;
		case 3:
			printf("곱하기를 실행합니다.\n");
			printf("두 수의 곱은 %lf입니다.\n", num1 * num2);
			break;
		case 4:
			if (num2 == 0.0) {
				printf("0으로 나눌 수 없습니다.\n");
			}
			else {
				printf("나누기를 실행합니다.\n");
				printf("두 수의 나눈 결과는 %lf입니다.\n", num1 / num2);
			}
			break;
		}
	}

	return 0;
}
