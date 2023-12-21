// A grid of size Nx N is given, where each cell contains either 'X' or 'Y' only.
//  The grid is initialized such that cell (1,1), the top- left cell, contains 'X, and subsequent cells alternately contain 'Y' and 'X', both vertically and horizontally.
// Write a program to handle three types of input operations on this grid:

// 1) If the input begins with 'X followed by two integers a and b, the program should update the (a,b) cell with 'X'. 
// II) If the input begins with 'Y' followed by two integers a and b, the program should update the (a,b) cell with "Y".

// III) If the input begins with 'C' followed by two integers a and b, 
// the program should output the counts of Xs and Ys within the subgrid starting from cell (a, b) and extending to the bottom-right corner of the grid.
// Read the input from STDIN and print the output to STDOUT.
// Do not print arbitrary strings anywhere in the program, as these contribute to the standard output and test cases will fail.


// Input Format:
// First line of input has an integer N, which is the size of the grid. Second line has an integer Q, 
// which is the number of input operations. Next Q lines have any of the 3 input operations explained above.
// Output Format:

// Every line of output has two integers, X_count and Y_count, separated by a single white space. The number of output lines depends on the number of input operations beginning with 'C.

// Constraints:

// 1) 1 <= N <= 500

// II) 1<=Q<150

// III) 1 <= a, b < N

// IV) Every set of inputs has at least one input beginning with 'C'.


// give the answer in folloiwng format 
// void countXandy (int N, int Q, char str[], int x1[], int y1[])

#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

void countXandy(int N, int Q, vector<char>& operations, vector<int>& x1, vector<int>& y1) {
    vector<vector<char> > grid(N, vector<char>(N));
    vector<pair<int, int> > output;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            grid[i][j] = (i + j) % 2 == 0 ? 'X' : 'Y';
        }
    }

    for (int i = 0; i < Q; ++i) {
        char op = operations[i];
        int a = x1[i] - 1;  // Convert to 0-based index
        int b = y1[i] - 1;

        if (op == 'X') {
            grid[a][b] = 'X';
        } else if (op == 'Y') {
            grid[a][b] = 'Y';
        } else {
            int x_count = 0;
            int y_count = 0;
            for (int x = a; x < N; ++x) {
                for (int y = b; y < N; ++y) {
                    if (grid[x][y] == 'X') {
                        x_count++;
                    } else {
                        y_count++;
                    }
                }
            }
            output.push_back(make_pair(x_count, y_count));
        }
    }

    for (const auto& counts : output) {
        cout << counts.first << " " << counts.second << endl;
    }
}

int main() {
    int N;
    cin >> N;

    int Q;
    cin >> Q;

    vector<char> operations(Q);
    vector<int> x1(Q);
    vector<int> y1(Q);

    for (int i = 0; i < Q; ++i) {
        cin >> operations[i] >> x1[i] >> y1[i];
    }

    countXandy(N, Q, operations, x1, y1);

    return 0;
}

// Test Case 1
// Input:
// 3
// 3
// C 1 1
// X 2 2
// C 1 1

// Output:
// 2 1
// 2 1


// Test Case 2:
// Input
// 4
// 4
// X 2 2
// Y 3 3
// C 1 1
// C 2 2

// Output:
// 0 1
// 0 1
// 2 2
// 1 1

// Test Case 3:
// Input
// 5
// 5
// Y 3 2
// C 1 1
// X 5 5
// X 3 3
// C 2 2

// Output:
// 3 2
// 5 0
// 3 2
// 1 1

// Test Case 4
// 2
// 3
// X 1 2
// Y 2 1
// C 1 1

// Output:
// 1 1
// 1 1

// Test Cases 5
// Input:
// 6
// 5
// X 3 3
// Y 2 4
// Y 1 2
// C 2 2
// C 1 1

// Output:
// 2 3
// 2 3
// 1 1
// 2 2
// 3 1



