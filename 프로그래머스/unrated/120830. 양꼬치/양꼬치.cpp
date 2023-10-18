#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    if(n < 10) {
        answer = 12000 * n + k*2000;
    }
    else {
        int a = n/10;
        answer = n * 12000 + k * 2000 - a * 2000;
    }
    return answer;
}