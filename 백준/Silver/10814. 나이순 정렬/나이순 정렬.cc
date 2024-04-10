#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, string> age, pair<int, string> name) {
    return age.first < name.first; 
}

int main() {
    int N;
    vector<pair<int, string>> v;
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        int num;
        string s;
        cin  >> num >> s;
        v.push_back({num, s});
    }
    
    stable_sort(v.begin(), v.end(), compare);
    
    for(int j = 0; j < N; j++) {
        cout << v[j].first << " " << v[j].second << "\n";
    }
}