#include <iostream>

using namespace std;

int main() {

	int hour, min;	cin >> hour >> min;     //시간, 분 입력

	if (min < 45) {         //45분보다 작을경우 시간 값에서 1을 빼고

		min = min + 15;     // 입력한 분에 + 15를 함

		hour = hour - 1;

		if (hour < 0)       // -1 한 시간 값이 0보다 작을 경우 23으로 변경

			hour = 23;  

	}

	else {

		min = min - 45;

	}

	cout << hour << " " << min << endl;

}