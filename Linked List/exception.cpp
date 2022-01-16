// problem link: https://www.hackerrank.com/challenges/30-linked-list?isFullScreen=true

#include <bits/stdc++.h>

using namespace std;



int main() {
    string s;
    cin >> s;
    
    try {
        cout << stoi(s) << endl;
    } catch(...) {
        cout << "Bad String" << endl;
    }
    
    return 0;
}
