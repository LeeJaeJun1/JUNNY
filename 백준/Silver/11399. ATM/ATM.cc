#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v;
     int sum{0};
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    
    for(int i = 0; i < N; i++) {
       sum += (N-i) * v[i]; 
    }
    cout << sum;    
}