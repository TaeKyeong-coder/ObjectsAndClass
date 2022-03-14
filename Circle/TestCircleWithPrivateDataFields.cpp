#include <iostream>
#include "CircleWithPrivateDataFields.h"
using namespace std;

int main() {

	//생성자 객체
	Circle circle1;
	Circle circle2(5.0);

	cout << "The area of the circle of radius " << circle1.getRadius() << " is " << circle1.getArea() << endl;
	cout << "The area of the circle of radius " << circle2.getRadius() << " is " << circle2.getArea() << endl;

	circle2.setRadius(100); //.은 객체 멤버 접근 연산자로 함수 호출
	cout << "The area of the circle of radius " << circle2.getRadius() << " is " << circle2.getArea() << endl;

	return 0;
}