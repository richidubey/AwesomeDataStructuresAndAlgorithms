//Que : https://www.hackerrank.com/challenges/bfsshortreach/problem
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
#include <climits>
// Complete the bfs function below.
vector<int> bfs(int n, int m, vector<vector<int>> edges, int s) {

  vector<int> res;
  vector<int> vis;
  vector<int> d;
  vector<vector<int>> adj;

  vis.resize(n + 1);
  d.resize(n + 1);
  adj.resize(n + 1);

  for (int i = 1; i <= n; i++)
    d[i] = -1;

  for (int i = 0; i < m; i++) {

    adj[edges[i][0]].push_back(edges[i][1]);
    adj[edges[i][1]].push_back(edges[i][0]);
  }

  queue<int> trav;

  vis[s] = 1;
  d[s] = 0;
  for (int i = 0; i < adj[s].size(); i++) {
    vis[adj[s][i]] = 1;
    trav.push(adj[s][i]);
    d[adj[s][i]] = d[s] + 1;
  }

  while (!trav.empty()) {
    s = trav.front();
    trav.pop();

    for (int i = 0; i < adj[s].size(); i++) {
      if (vis[adj[s][i]] == 0) {
        vis[adj[s][i]] = 1;
        trav.push(adj[s][i]);
        d[adj[s][i]] = d[s] + 1;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (d[i + 1] != -1)
      d[i + 1] *= 6;
  }

  for (int i = 0; i < n; i++) {
    if (d[i + 1])
      res.push_back(d[i + 1]);
  }

  return res;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  int q;
  cin >> q;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  for (int q_itr = 0; q_itr < q; q_itr++) {
    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    vector<vector<int>> edges(m);
    for (int i = 0; i < m; i++) {
      edges[i].resize(2);

      for (int j = 0; j < 2; j++) {
        cin >> edges[i][j];
      }

      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int s;
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> result = bfs(n, m, edges, s);

    for (int i = 0; i < result.size(); i++) {
      fout << result[i];

      if (i != result.size() - 1) {
        fout << " ";
      }
    }

    fout << "\n";
  }

  fout.close();

  return 0;
}

vector<string> split_string(string input_string) {
  string::iterator new_end =
      unique(input_string.begin(), input_string.end(),
             [](const char &x, const char &y) { return x == y and x == ' '; });

  input_string.erase(new_end, input_string.end());

  while (input_string[input_string.length() - 1] == ' ') {
    input_string.pop_back();
  }

  vector<string> splits;
  char delimiter = ' ';

  size_t i = 0;
  size_t pos = input_string.find(delimiter);

  while (pos != string::npos) {
    splits.push_back(input_string.substr(i, pos - i));

    i = pos + 1;
    pos = input_string.find(delimiter, i);
  }

  splits.push_back(
      input_string.substr(i, min(pos, input_string.length()) - i + 1));

  return splits;
}

