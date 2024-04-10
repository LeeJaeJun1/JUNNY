#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<pair<int, int>> v;
    int N;
    cin >> N;
    int x, y;
    for(int i = 0; i < N; i++) {
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end());
    
    for(int j = 0; j < N; j++) {
        cout << v[j].first << " " << v[j].second << "\n";
    }
}