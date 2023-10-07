#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer{0};
    answer = num1 / (double)num2 * 1000; // num1과 num2의 몫이 소수점이 나올 수 있으므로 double 형식으로 변환해준다.
    return answer;
}