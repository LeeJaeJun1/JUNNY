#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    
    int num = nums.size() /2;
    
    set<int> s(nums.begin(), nums.end());
    
    int kind = s.size();
    
    if(num < kind) answer = num;
    else answer = kind;
    return answer;
}

// N/2 와 폰켓몬 종류의 수를 비교해야 한다.
// 폰켓몬 종류의 수를 구하기 위해서, 중복되는 숫자를 하나의 숫자로 카운트 해주는 set 함수를 사용했다.