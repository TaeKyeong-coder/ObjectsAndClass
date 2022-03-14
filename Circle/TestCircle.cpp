//클래스는 객체에 대한 정의이며, 객체는 클래스로부터 생성된다.

#include <iostream>
using namespace std;

class Circle { //클래스 정의
public://public키워드가 없으면 기본값은 전용(private)로 설정됨.
	//데이터 필드
	double radius; //원의 반지름

	//기본 circle객체 생성
	Circle() { //인수 없는 생성자 why? 객체 생성 후 딱 한 번만 사용 => 이름 필요 없음 => 익명 객체
		radius = 1;
	}

	Circle(double newRadius) { //두 번째 생성자
		radius = newRadius;
	}

	double getArea() { //원의 면적을 반환하는 함수 작성
		return radius * radius * 3.14159;
	}
}; //클래스 정의의 끝에는 세미콜론 반드시 존재해야 한다는 필수 조건이 있음.

int main() {
	//세 개의 원(circle)객체 생성
	Circle circle1(1.0);
	Circle circle2(25);
	Circle circle3(125); 
	//인수없는 생성자로 이름있는 객체를 생성하려면 Circle circle()이 아닌 Circle circle
	//익명 객체 생성은 circle1 = Circle(); 이런 식으로 생성

	cout << "The area of the circle1 of radius" << circle1.radius << "is" << circle1.getArea() << endl;
	cout << "The area of the circle2 of radius" << circle2.radius << "is" << circle2.getArea() << endl;
	cout << "The area of the circle3 of radius" << circle3.radius << "is" << circle3.getArea() << endl;

	circle2.radius = 100; //반지름 변경
	cout << "The area of the circle of radius" << circle2.radius << "is" << circle2.getArea() << endl;

	return 0;
}