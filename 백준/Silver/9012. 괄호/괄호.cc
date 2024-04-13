#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

string VPS(string T) {
    stack<char> st;
    for(int i = 0; i < T.size(); i++) {
        if(T[i] == '(') {
            st.push('(');
        }
        else {
            if(st.empty() == 1) {
            return "NO";
            }
            else{
            st.pop();
            }
        }
}
    if(st.empty() == 1) {
        return "YES";
    }
    else {
        return "NO";
    }
}


int main() {
    string st;
    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> st;
        cout << VPS(st) << "\n";
    }
}