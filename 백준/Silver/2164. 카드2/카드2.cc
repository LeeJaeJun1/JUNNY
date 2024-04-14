#include<iostream>
#include<queue>
using namespace std;

int main() {
    int N{0};
    queue<int> qu;
    
    cin >> N;
    for(int i = 1; i <= N; i++) {
        qu.push(i);
    }
    
    while(qu.size() != 1) {
        qu.pop();
        qu.push(qu.front());
        qu.pop();
    }
    cout << qu.front();
}