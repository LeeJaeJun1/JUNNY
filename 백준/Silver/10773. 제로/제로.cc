#include<iostream>
#include<stack>
using namespace std;

int main() {
    int K{0};
    int sum{0};
    stack<int> st;
    
    cin >> K;
    for(int i = 0; i < K; i++) {
        int num;
        cin >> num;
        if(num != 0) { // 0이 아닌 경우 push
            st.push(num);
        }
        else if(num == 0) { // 0인 경우 pop
            st.pop();
        }
    }
    
    while(!st.empty()) { 
    // 0일 경우에 지울 수 있는 수가 있음을 보장하기 때문에 비어있지 않을때까지
       sum = sum + st.top();
       st.pop();
    }
   
   cout << sum;
}