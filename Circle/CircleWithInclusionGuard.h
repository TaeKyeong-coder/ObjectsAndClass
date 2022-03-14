#ifndef CIRCLE_H //endif꼭 써줘야 함. 정의되는가?
#define CIRCLE_H //정의
//비주얼스튜디오에서는 #pragma once로 대체 가능

class Circle {
public:
	double radius;

	//기본 circle객체 생성
	Circle();

	Circle(double);

	double getArea();
};

#endif //헤더파일의 끝