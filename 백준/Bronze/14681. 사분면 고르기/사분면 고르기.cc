#include <iostream>

using namespace std;

int main() {

  int x, y;

  cin >> x;

  cin >> y;

  if (x > 0 && y > 0)          // x = 양수, y = 양수

    cout << "1" << endl;

  else if (x > 0 && y < 0)     // x = 양수, y = 음수

    cout << "4" << endl;

  else if (x < 0 && y < 0)     // x = 음수, y = 음수

    cout << "3" << endl;

  else

    cout << "2" << endl;       // x = 음수, y = 양수

  return 0;

}