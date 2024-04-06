#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v;
    
    int A;
    int B;
    int C;
    
    for(int i = 0; i < 3; i++){
      int num;
      cin >> num;
      v.push_back(num);
    }
    sort(v.begin(),v.end());
    
    cout << v[1];
    
}