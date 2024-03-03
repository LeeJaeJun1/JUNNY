#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    
    sort(participant.begin(),participant.end()); // 참가자와 완주자 명단을 정렬한다.
    sort(completion.begin(),completion.end());
    
    for (int i = 0; i < completion.size(); i ++) // 참가자와 완주자 명단을 비교하며 완주하지 못한 사람은 찾아낸다.
    {
        if (participant[i] != completion[i]) 
        return participant[i];

    }
    return participant[participant.size()-1]; 
    // 비교가 끝났을 때 완주하지 못한 사람이 없을 경우, 마지막 사람이 완주하지 못한 사람이다.
}