#include <iostream>
using namespace std;

int main() {
	int min = 1000001;	
    int max = -1000001;
	int n, input;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input < min) {
			min = input;
		}
		if (input > max) {
			max = input;
		}
	}
	cout << min << " " << max;
	return 0;
}