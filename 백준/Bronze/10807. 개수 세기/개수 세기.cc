#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; 
    int numbers[100]; 
    for (int i = 0; i < N; ++i) {
        std::cin >> numbers[i]; 
    }
    int v;
    cin >> v; 
    int count = 0; 
    for (int i = 0; i < N; ++i) {
        if (numbers[i] == v) {
            count++; 
        }
    }
    cout << count << endl; 
    return 0;
}