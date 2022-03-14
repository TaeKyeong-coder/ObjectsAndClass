# ObjectsAndClass
c++에서의 객체와 클래스의 기본을 공부해본다. 클래스 정의와 구현을 분리해서 코드를 작성해보기 (Circle,의 반지름으로 넓이 구하기와 TV켜고 끄기 등)

#파일 목록 참고
![캡처](https://user-images.githubusercontent.com/68893329/158183696-47db863e-0e5c-47cd-93bd-5bd6f2e5f8b6.PNG)

#TV.cpp : 클래스를 정의하고 객체를 생성하는 법 익히기 (클래스 생성하고 main함수에서 접근, 사용)

#Cicle 클래스의 정의와 구현 : Circle.h , Circle.cpp
#Circle클래스를 사용한 프로그램(클라이언트) : TestCircleWithHeader.cpp -> 클래스를 분리하는 이유 주석

#다중 포함 방지 공부 : CircleWithInclusionGuard.h

#데이터 필드 캡슐화(privaate사용 & 접근자와 변경자 사용 연습) : CircleWithPrivateDataFields.h, CircleWithPrivateDataFields.cpp, TestCircleWithPrivateDataFields.cpp

#처음 만든 Circle.h파일은 계속 포함하여 사용
