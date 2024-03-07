#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> copy = emergency; // emergency를 복사한 copy 만든다.
    sort(copy.rbegin(), copy.rend()); // copy 내림차순으로 정렬시킨다.
     
    for(int i = 0; i < emergency.size(); i++) { // emergency 돌린다
        for(int j=0; j< copy.size(); j++) { // copy 돌린다
            if(emergency[i] == copy[j]) { // 내림차순을 정렬된 emergnecy 와 copy 숫자가 같으면
                answer.push_back(j+1); // answer에 그 순서보다 1 큰 수로 번호를 매긴다(0부터 시작하기 때문)
                break;
            }
        }
    }
    
    return answer;
}