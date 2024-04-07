#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int answer{0};
    
    while(N >= 0) {
        if(N % 5 == 0) { // N이 5의 배수이면 몫이 필요한 봉지개수이다.
            answer += N / 5;
            cout << answer << endl;
            return 0;
        }
        else{
        N -= 3; // 5의 배수가 아니면 3씩 빼주고,총 봉지개수 추가
        answer++;
        }
    }
    cout << "-1" << endl; // 정확한 N킬로그램 만들 수 없다면 -1 출력
}