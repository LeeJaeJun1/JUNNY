#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    for(int i{1}; i<=n; ++i) { 
        for(int j{1}; j<=i; ++j) { // i의 값만큼 *을 찍어준다.
            cout << "*";
        }
        cout << endl; // i의 값만큼 *을 찍어주는 for문이 끝나면 열을 바꿔준다.
    }
    return 0;
}