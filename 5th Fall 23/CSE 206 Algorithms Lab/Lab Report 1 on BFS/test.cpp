// @JahidulZaid
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'

const int N = 1e5+2;
bool visited[N];
vector<int> adj[N];

int countPossiblePairs(int N, int A, int B, vector<int>& P) {
    sort(P.begin(), P.end());
    int pairs = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int pairSum = P[i] + P[j];
            if (A <= pairSum && pairSum <= B) {
                pairs++;
            }
        }
    }

    return pairs;
}

int main(){
  int t;
  cin>> t;
  for (int caseNum = 1; caseNum <= T; caseNum++) {
        int N, A, B;
        cin >> N >> A >> B;

        vector<int> P(N);
        for (int i = 0; i < N; i++) {
            cin >> P[i];
        }
        int result = countPossiblePairs(N, A, B, P);
        cout << "Case " << caseNum << ": " << result << endl;
    }




  return 0;



}


