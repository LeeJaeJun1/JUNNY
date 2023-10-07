#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int a=0; // 짝수 개수를 나타내는 변수
    int b=0; // 홀수 개수를 나타내는 변수
    
    for(int i{0}; i<num_list.size(); i++) {
        
        if(num_list[i] % 2 == 0) { // num_list 각 원소의 값이 짝수일 경우
            a++; // a값 1씩 커진다
        }
        
        else {
            b++; // 홀수일 경우 b값 1씩 커진다.
        }
    }
    answer.push_back(a); // answer 배열에 a,b 대입한다
    answer.push_back(b);
    return answer;
}