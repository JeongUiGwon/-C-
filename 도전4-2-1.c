#include <stdio.h>

int main(void)
{
	double weight = 0.0, height = 0.0, bmi = 0.0;		// 몸무게, 키, BMI 변수 선언

	printf("몸무게(kg)와 키(cm) 입력 : ");				// 입력 메세지 출력
	scanf("%lf%lf", &weight, &height);					// 몸무게, 키 입력

	bmi = weight / ((height / 100.0)*(height / 100.0));	// bmi 계산

	printf((bmi >= 20.0 && bmi <= 25.0) ? "표준입니다\n" : "체중관리가 필요합니다\n");

	return 0;
}