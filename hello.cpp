
#include <stdio.h>
int main() {
	
	printf("계산기를 만들어보죠 . \n");
	printf("1. 더하기 \n");
	printf("2. 빼기 \n");
	printf("3. 곱하기 \n");
	printf("4. 나누기 \n");

	while (true)
	{
		int select =0;
		double num1 = 0.0; double num2=0.0;

		printf("원하는 작업을 선택하세요 (1~4) : ");
		scanf_s("%d", &select);

		switch (select)
		{
		case 1:
			printf("더하기를 실행하겠습니다. \n");
			printf("정수의 두 수를 입력하세요 : ");
			scanf_s("%lf , %lf", &num1, &num2);
			printf("두 수의 합은 %lf 입니다. \n", num1 + num2);
			break;
		case 2:
			printf("빼기를 실행하겠습니다. \n");
			printf("정수의 두 수를 입력하세요 : ");
			scanf_s("%lf , %lf", &num1, &num2);
			printf("두 수의 빼기는 %lf 입니다. \n", num1 - num2);
			break;
		case 3:
			printf("곱하기를 실행하겠습니다. \n");
			printf("정수의 두 수를 입력하세요 : ");
			scanf_s("%lf , %lf", &num1, &num2);
			printf("두 수의 곱하기는 %lf 입니다. \n", num1 * num2);
			break;
		case 4:
			printf("나누기를 실행하겠습니다. \n");
			printf("정수의 두 수를 입력하세요 : ");
			scanf_s("%lf , %lf", &num1, &num2);
			printf("두 수의 합은 %lf 입니다. \n", num1 / num2);
			break;
		default:
			break;
		}

	}

	return 0;
}