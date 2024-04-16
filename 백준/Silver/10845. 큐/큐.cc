#include<iostream>
#include<queue>
using namespace std;

int main() {
    int N{0};
    string command;
    queue<int> q;
    
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        cin >> command;

        if(command == "push") {
            int n;
            cin >> n;
            q.push(n);
        }
        
        else if(command == "front") {
            if(q.size() == 0) cout << "-1" << "\n";
            else {
                cout << q.front() << "\n";
            }
        }
        
        else if(command == "back") {
            if(q.size() == 0) cout << "-1" << "\n";
            else {
                cout << q.back() << "\n";
            }
        }
        
        else if(command == "size") {
            cout << q.size() << "\n";
        }
        
        else if(command == "empty") {
            if(q.size() == 0) {
                cout << "1" << "\n";
            }
            else cout << "0" << "\n";
        }
        
        else if(command == "pop") {
            if(q.size() == 0) cout << "-1" << "\n";
            else {
                cout << q.front() << "\n";
                q.pop();
            }
        }
    }
    
    return 0;
}