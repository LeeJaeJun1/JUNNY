
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int N, K;
    int answer = 0;
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    for (int i = N - 1; i >= 0; i--) { 
        if (K >= v[i]) {
            answer += K / v[i];
            K %= v[i];
            
        }
        }
    

    cout << answer;
    return 0;
}
