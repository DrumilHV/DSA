#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<int, vector<int>> tree; // Adjacency list representation of the tree
vector<bool> visited;
vector<int> subtreeSum;

void dfs(int node) {
    visited[node] = true;
    subtreeSum[node] = 0;

    for (int child : tree[node]) {
        if (!visited[child]) {
            dfs(child);
            subtreeSum[node] += subtreeSum[child];
        }
    }
}

int magicParentsSum(int N, int root, string pos[], int val[]) {
    for (int i = 0; i < N - 1; i++) {
        if (pos[i] == "L") {
            tree[val[i]].push_back(val[i + 1]);
        } else if (pos[i] == "R") {
            tree[val[i]].push_back(val[i + 1]);
        } else if (pos[i][0] == 'L') {
            int parent = stoi(pos[i].substr(1));
            tree[parent].push_back(val[i + 1]);
        } else if (pos[i][0] == 'R') {
            int parent = stoi(pos[i].substr(1));
            tree[parent].push_back(val[i + 1]);
        }
    }

    visited.resize(N + 1, false);
    subtreeSum.resize(N + 1, 0);

    dfs(root);

    int magicSum = 0;

    for (int i = 1; i <= N; i++) {
        for (int child : tree[i]) {
            if (subtreeSum[child] % 2 != subtreeSum[i] % 2) {
                magicSum += i;
                break;
            }
        }
    }

    return magicSum;
}

int main() {
    int N, root;
    cin >> N >> root;

    string pos[N - 1];
    int val[N - 1];

    for (int i = 0; i < N - 1; i++) {
        cin >> pos[i] >> val[i];
    }

    int result = magicParentsSum(N, root, pos, val);
    cout << result << endl;

    return 0;
}