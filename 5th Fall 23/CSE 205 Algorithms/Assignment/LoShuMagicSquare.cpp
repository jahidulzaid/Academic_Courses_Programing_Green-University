//jahidulZaid
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

bool isLoShuMagicSquare(vector<vector<int>>& grid) {
    if (grid.size() != 3 || grid[0].size() != 3 || grid[1].size() != 3 || grid[2].size() != 3) {
        cout << "The grid is not a 3x3 square." << endl;
        return false;
    }

    vector<bool> found(10, false);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i][j] < 1 || grid[i][j] > 9 || found[grid[i][j]]) {
                cout << "Invalid number in the grid." << endl;
                return false;
            } else {
                found[grid[i][j]] = true;
            }

    int magicSum = 15;
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        int colSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += grid[i][j];
            colSum += grid[j][i];
        }
        if (rowSum != magicSum || colSum != magicSum) {
            cout << "This is not a Lo Shu Magic Square." << endl;
            return false;
        }
    }

    if (grid[0][0] + grid[1][1] + grid[2][2] != magicSum ||
        grid[0][2] + grid[1][1] + grid[2][0] != magicSum) {
        cout << "This is not a Lo Shu Magic Square." << endl;
        return false;
    }

    cout << "This is a Lo Shu Magic Square." << endl;
    return true;
}

void displaySquare(const vector<vector<int>>& grid) {
    cout << "Generated 3x3 Square:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> userGrid(3, vector<int>(3));
    cout << "Enter numbers for a 3x3 grid:" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> userGrid[i][j];

    displaySquare(userGrid);
    isLoShuMagicSquare(userGrid);

    return 0;
}
