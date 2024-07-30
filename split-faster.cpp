#include <bits/stdc++.h>
using namespace std;

vector<string> split_faster(string input, string del) {
  vector<string> ret;
  auto start = 0;
  auto end = input.find(del);
  while (end != string::npos) {
    ret.push_back(input.substr(start, end - start));
    start = end + del.size();
    end = input.find(del, start);
  }
  ret.push_back(input.substr(start));
  return ret;
}