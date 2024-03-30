// Bismillahir Rahmanir Rahim
// jahidul Islam
// 221002504

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define tt long long t; cin >> t; 
#define ll long long
#define pb push_back
#define ppb pop_back

int main() {
    optimize();
    string input;
    getline(cin, input);
    
    int startFlag = input.find("01111110");
    int endFlag = input.rfind("01111110");

    if (startFlag == string::npos || endFlag == string::npos) {
        cout << "Missing flag." << endl;
        return 0;
    }

    
    string stuffedData = input.substr(startFlag + 8, endFlag - startFlag - 8);

    int size = stuffedData.size();

    vector<char> v;

    int cnt = 0;
    for (int i = 0; i < size; i++) {
        v.push_back(stuffedData[i]);
        
        if (stuffedData[i] == '1') {
            cnt++;
            
            if (cnt == 5) {
                i++;
                cnt = 0;
            }
        } else {
            cnt = 0;
        }
    }

    // Print the de-stuffed data with the flags
    cout << "01111110 ";
    for (auto x : v) {
        cout << x;
    }
    cout << " 01111110" << endl;

    return 0;
}
