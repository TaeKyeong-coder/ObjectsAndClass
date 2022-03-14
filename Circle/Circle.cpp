#include "Circle.h"//클래스 정의 포함/""은 직접 만든 class고 <>은 C++에서 제공

//::기호(이항 범위 지정 연산자) : 클래스 멤버의 범위 나타내기
//Circle::은 생성자와 함수가 Circle클래스에 정의되어 있다는 것을 컴파일러에게 알려주는 것

Circle::Circle() { //생성자 구현
	radius = 1;
}

Circle::Circle(double newRadius) { //생성자 구현
	radius = newRadius;
}

double Circle::getArea() { //원의 면적을 반환하는 함수 구현
	return radius * radius * 3.14159;
}