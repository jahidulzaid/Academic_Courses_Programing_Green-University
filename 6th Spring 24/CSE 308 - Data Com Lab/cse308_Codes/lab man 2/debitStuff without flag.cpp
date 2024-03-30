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

// #ifdef LOCAL
// #include "debug.h"
// #endif

#ifdef ONLINE_JUDGE
#include "debug.h"
#endif


int main() {
    optimize();
    string stuffedData;
    cin >> stuffedData;

    int size = stuffedData.size();
    vector<char>v;

    // debug(v);
    int cnt  = 0;
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
    //print
    for(auto x: v){
        cout << x;
    }
    cout << endl;

    return 0;
}


// 000111110111000000111

// output = 00011111111000000111