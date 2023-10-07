#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for (int i = 0; i<numbers.size(); ++i) { // numbers 배열의 크기만큼 for문을 돌린다.
    answer.push_back(numbers[i] * 2); // numbers 각 원소의 값을 두 배 시킨다.
}
    return answer;
}