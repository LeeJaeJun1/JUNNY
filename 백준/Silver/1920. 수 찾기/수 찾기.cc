#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// 이진탐색을 사용한 문제풀이

int main() {
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    
    int N,M;
    vector<int> v;
    cin >> N;
    for(int i = 0; i < N; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
   
   cin >> M;
    
    for(int k = 0; k < M; k++) {
        int num;
        cin >> num;
        if(binary_search(v.begin(), v.end(), num)) { // 이진 탐색을 이용해 첫 번쨰 벡터에서 해당요소 찾는다
            cout << "1" << "\n";
        }
        else cout << "0" << "\n";
    }
    return 0;
}
       