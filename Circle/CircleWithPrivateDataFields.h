//#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
public: //공용 => 데이터 직접 수정 가능 -> 데이터 임의로 수정될 수 있고 클래스의 유지보수가 어려워짐
	Circle();
	Circle(double);
	//접근자(accessor) 함수 : returnType getPropertyName() 혹은 bool isPropertyName()
	double getArea();
	double getRadius();
	//변경자(mutator) 함수 : void setPropertyName(dataType propertyValue)
	void setRadius(double);

private: //전용
	/*데이터 필드를 전용? 데이터 필드 캡슐화(Encapsulation & Informationi Hiding)
		=> 데이터 보호 -> 클래스의 유지보수가 쉬워진다
	*/
	double radius;
};
#endif// !CIRCLE_H
