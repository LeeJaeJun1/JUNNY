#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    if(num1 == num2) { //두 수 같을 경우 if문 사용
answer = 1;
}
    else{ // 다를 경우 else 사용
answer = -1;
    }
    return answer;
}