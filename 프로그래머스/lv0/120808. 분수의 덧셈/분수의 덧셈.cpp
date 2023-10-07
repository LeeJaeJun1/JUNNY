#include <string>
#include <vector>

using namespace std;


int gcd(int a, int b){ // 최대공약수 구하는 공식
if(a%b==0){ // 예를 들어, a = 4 b = 2일 경우 최대공약수는 2이다. 따라서 그냥 b를 return 하면 된다. 이러한 예시들이 a와 b의 나머지가 0인 경우다.
return b;
}
    return gcd(b, a%b); // 위의 경우가 아닌 경우 b와 a와 b의 나머지를 gcd 함수에 계속해서 대입하면서 최대공약수를 찾아야한다.
    if(a<b){ // a의 값이 b보다 작을 경우에는 최대공약수가 항상 1이다.
    return 1;
  }
}
vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int a = denom1 * denom2; // 분모를 뜻한다.
    int b = numer1 * denom2 + numer2 * denom1; // 분자를 뜻한다.
    
    int c = gcd(a, b); // 분모와 분자의 최대공약수를 구한다.
     
    a/=c; // 기약분수로 나타내야하기 때문에 최대공약수로 나눈다.
    b/=c; // 기약분수로 나타내야하기 때문에 최대공약수로 나눈다.
    
    answer.push_back(b); // answer 배열에 대입한다. 
    answer.push_back(a); // answer 배열에 대입한다. 
    
    return answer;
}