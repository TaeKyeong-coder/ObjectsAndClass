#include <iostream>
using namespace std;

class TV { //클래스 정의하고
	//데이터 필드 작성
public:
	int channel;
	int volumeLevel;
	bool on;

	TV() { //생성자
		//기본 값들 1, 1, TV off상태로 설정
		channel = 1;
		volumeLevel = 1;
		on = false;
	}

	//함수 작성
	void turnOn() {
		on = true;
	}

	void turnOff() {
		on = false;
	}

	void setChannel(int newChannel) {
		if (on && newChannel >= 1 && newChannel <= 120)
			channel = newChannel;
	}

	void setVolume(int newVolumeLevel) {
		if (on && newVolumeLevel >= 1 && newVolumeLevel <= 7)
			volumeLevel = newVolumeLevel;
	}

	void channelUp() {
		if (on && channel < 120)
			channel++;
	}

	void channelDown() {
		if (on && channel > 1)
			channel--;
	}

	void volumeUp() {
		if (on && volumeLevel < 7)
			volumeLevel++;
	}

	void volumeDown() {
		if (on && volumeLevel > 1)
			volumeLevel--;
	}
};

int main() {
	TV tv1; //tv생성
	tv1.turnOn(); //객체.함수(인수)로 객체에 대한 함수를 호출
	tv1.setChannel(30);
	tv1.setVolume(3);

	TV tv2;
	tv2.turnOn();
	tv2.channelUp();
	tv2.channelUp();
	tv2.volumeUp();

	//객체.데이터필드 => 객체의 데이터 필드를 참조한다
	cout << "tv1's channel is " << tv1.channel << " and volume level is " << tv1.volumeLevel << endl;
	cout << "tv2's channel is " << tv2.channel << " and volume level is " << tv2.volumeLevel << endl;

	return 0;
}