#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string s = to_string(age); // int 형식을 string 형식으로 변환하는 함수 : to_string
    for(int i{0}; i < s.size(); i++) {
        answer += (s[i] + 49);
    }
    return answer;
}