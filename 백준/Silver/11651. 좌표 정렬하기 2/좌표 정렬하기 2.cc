#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// 블로그

bool compare(pair<int,int> a, pair<int, int> b) {
    if(a.second == b.second) {
        return a.first < b.first;
    }
    else {
    return a.second < b.second;
    }
}

int main() {
    int N;
    vector<pair<int,int>> v;
    
    cin >> N;
    for(int i = 0; i < N; i++) {
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    
    sort(v.begin(), v.end(), compare);
    
    for(int j = 0; j < N; j++) {
        cout << v[j].first << " " << v[j].second << "\n";
    }
}