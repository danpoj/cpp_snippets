#include <bits/stdc++.h>
using namespace std;

/**
 * 5개중 3개를 순서상관업이 뽑는다.
 */

void combi(int start, vector<int> vec) {
  if(vec.size() == 3) {
    // ...logic
    return;
  }

  for(int i = start + 1; i < 5; i++) {
    vec.push_back(i);
    combi(i, vec);
    vec.pop_back();
  }
}

int main() {
  vector<int> b;
  combi(-1, b);
  return 0;
}