#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

map<string, string> m; // map 객체 생성, 모스부호와 알파벳을 연결하기 위한 맵

string arr[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",
				".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                "...","-","..-","...-",".--","-..-","-.--","--.."}; // 알파벳에 대응하는 모스부호 26개 배열

string solution(string letter) {
    string answer = "";
    string str = "";
    stringstream stream(letter); // stream에 letter 대입
    char c = 'a';
    
    for(int i = 0; i< 26; i++) { // 모스부호 입력받아, 알파벳으로 변환한다.
        m[arr[i]] = c + i;
    }
    
    while(stream >> str) { // 공백을 기준으로 주어진 모스코드 문자열 분리
        answer += m[str]; // answer에 추가
    }
    
    return answer;
}