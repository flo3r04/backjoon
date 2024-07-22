#include <iostream>

using namespace std;

int main() {

  int H, M, N;

  cin >> H >> M;

  cin >> N;

  H += N / 60;

  M += N % 60;

  if (M >= 60)

  {

    H += 1;

    M -= 60;

  }

    

  if(H >= 24)

    H -= 24;

    cout << H << " " << M << endl;

}