#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> v; // 벡터사용
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    
     for(int i = 0; i < N; i++) {
        cout << v[i] << "\n";
    }
    return 0;
}