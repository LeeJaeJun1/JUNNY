#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int N{0};
    int sum{0};
    vector<int> A;
    vector<int> B;
    
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        int num;
        cin >> num;
        A.push_back(num);
    }
    
    for(int i = 0; i < N; i++) {
        int num;
        cin >> num;
        B.push_back(num);
    }
    
    sort(A.begin(), A.end());
    sort(B.rbegin(), B.rend());
    
    for(int j = 0; j < N; j++) {
        sum += A[j] * B[j];
    }
    
    cout << sum;
}