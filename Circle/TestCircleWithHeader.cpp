#include<iostream>
#include "Circle.h" //클래스를 사용하는 프로그램=> 클라이언트(client)
using namespace std;

int main() {
	//생성자
	Circle circle1;
	Circle circle2(5.0);

	cout << "The area of the circle1 of radius " << circle1.radius << " is " << circle1.getArea() << endl;
	cout << "The area of the circle2 of radius " << circle2.radius << " is " << circle2.getArea() << endl;

	//반지름 새로 설정 (변경)
	circle2.radius = 100;
	cout << "The area of the circle of radius " << circle2.radius << " is " << circle2.getArea() << endl;

	return 0;
}