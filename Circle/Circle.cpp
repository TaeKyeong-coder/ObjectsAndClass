#include "Circle.h"//Ŭ���� ���� ����/""�� ���� ���� class�� <>�� C++���� ����

//::��ȣ(���� ���� ���� ������) : Ŭ���� ����� ���� ��Ÿ����
//Circle::�� �����ڿ� �Լ��� CircleŬ������ ���ǵǾ� �ִٴ� ���� �����Ϸ����� �˷��ִ� ��

Circle::Circle() { //������ ����
	radius = 1;
}

Circle::Circle(double newRadius) { //������ ����
	radius = newRadius;
}

double Circle::getArea() { //���� ������ ��ȯ�ϴ� �Լ� ����
	return radius * radius * 3.14159;
}