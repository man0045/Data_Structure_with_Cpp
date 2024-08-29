#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<string> core(n);
        vector<vector<int>> adj(n);  

        for (int i = 0; i < n; ++i) {
            cin >> core[i];
        }

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (core[i][0] == core[j][0] || core[i][0] == core[j][1] 
                    || core[i][1] == core[j][0] || core[i][1] == core[j][1]) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        vector<vector<int>> min_cost(n, vector<int>(n, INF));
        
        for (int poke = 0; poke < n; ++poke) {
            queue<int> q;
            q.push(poke);
            min_cost[poke][poke] = 0;

            while (!q.empty()) {
                int city = q.front();
                q.pop();

                for (int next : adj[city]) {
                    if (min_cost[poke][next] > min_cost[poke][city] + abs(city - next)) {
                        min_cost[poke][next] = min_cost[poke][city] + abs(city - next);
                        q.push(next);
                    }
                }
            }
        }

        while (q--) {
            int x, y;
            cin >> x >> y;
            --x; --y;

            int result = min_cost[x][y];
            if (result == INF) {
                cout << -1 << endl;
            } else {
                cout << result << endl;
            }
        }
    }

    return 0;
}
