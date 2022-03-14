//#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
public: //���� => ������ ���� ���� ���� -> ������ ���Ƿ� ������ �� �ְ� Ŭ������ ���������� �������
	Circle();
	Circle(double);
	//������(accessor) �Լ� : returnType getPropertyName() Ȥ�� bool isPropertyName()
	double getArea();
	double getRadius();
	//������(mutator) �Լ� : void setPropertyName(dataType propertyValue)
	void setRadius(double);

private: //����
	/*������ �ʵ带 ����? ������ �ʵ� ĸ��ȭ(Encapsulation & Informationi Hiding)
		=> ������ ��ȣ -> Ŭ������ ���������� ��������
	*/
	double radius;
};
#endif// !CIRCLE_H
