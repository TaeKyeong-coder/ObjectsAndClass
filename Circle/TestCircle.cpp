//Ŭ������ ��ü�� ���� �����̸�, ��ü�� Ŭ�����κ��� �����ȴ�.

#include <iostream>
using namespace std;

class Circle { //Ŭ���� ����
public://publicŰ���尡 ������ �⺻���� ����(private)�� ������.
	//������ �ʵ�
	double radius; //���� ������

	//�⺻ circle��ü ����
	Circle() { //�μ� ���� ������ why? ��ü ���� �� �� �� ���� ��� => �̸� �ʿ� ���� => �͸� ��ü
		radius = 1;
	}

	Circle(double newRadius) { //�� ��° ������
		radius = newRadius;
	}

	double getArea() { //���� ������ ��ȯ�ϴ� �Լ� �ۼ�
		return radius * radius * 3.14159;
	}
}; //Ŭ���� ������ ������ �����ݷ� �ݵ�� �����ؾ� �Ѵٴ� �ʼ� ������ ����.

int main() {
	//�� ���� ��(circle)��ü ����
	Circle circle1(1.0);
	Circle circle2(25);
	Circle circle3(125); 
	//�μ����� �����ڷ� �̸��ִ� ��ü�� �����Ϸ��� Circle circle()�� �ƴ� Circle circle
	//�͸� ��ü ������ circle1 = Circle(); �̷� ������ ����

	cout << "The area of the circle1 of radius" << circle1.radius << "is" << circle1.getArea() << endl;
	cout << "The area of the circle2 of radius" << circle2.radius << "is" << circle2.getArea() << endl;
	cout << "The area of the circle3 of radius" << circle3.radius << "is" << circle3.getArea() << endl;

	circle2.radius = 100; //������ ����
	cout << "The area of the circle of radius" << circle2.radius << "is" << circle2.getArea() << endl;

	return 0;
}