#include <iostream>

using namespace std;

int main() {

    int x;

    cin >> x;

    

    if( x % 4 == 0) {

        if ( x % 100 != 0 || x % 400 == 0)

        {

            cout << "1" << endl;

        } 

        else

            cout << "0" << endl;

    }

    else

        cout << "0" << endl;

    return 0;

}