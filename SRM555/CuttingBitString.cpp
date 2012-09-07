#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cstdio>
#include <numeric>
#include <bitset>
#include <stack>
#include <cstring>
using namespace std;

const int INF = 1 << 30;
const double EPS = 1e-10;

map<string, int> memo;

class CuttingBitString
{
public:
  void generate(string s, int cnt, const vector<string>& bit, const string& S)
  {
    if (s.size() > S.size())
      return;

    for (unsigned int i = 0; i < s.size(); ++i) {
      if (s[i] != S[i])
        return;
    }

    if (memo.find(s) != memo.end())
      return;

    memo[s] = cnt;
    for (unsigned int i = 0; i < bit.size(); ++i)
      generate(s+bit[i], cnt+1, bit, S);
  }

  int getmin(string S)
  {
    vector<string> bit;

    long long f = 1;
    for (int i = 0; i < 22; ++i) {
      long long ff = f;
      string tmp = "";
      while (ff > 0) {
        stringstream ss;
        ss << (ff % 2);
        tmp = ss.str() + tmp;
        ff /= 2;
      }
      bit.push_back(tmp);
      f *= 5LL;
    }
    reverse(bit.begin(), bit.end());

    memo.clear();
    generate("", 0, bit, S);

    if (memo.find(S) == memo.end())
      return -1;
    return memo[S];
  }
  
  // BEGIN CUT HERE
public:
  void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
private:
  template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
  void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
  void test_case_0() { string Arg0 = "101101101"; int Arg1 = 3; verify_case(0, Arg1, getmin(Arg0)); }
  void test_case_1() { string Arg0 = "1111101"; int Arg1 = 1; verify_case(1, Arg1, getmin(Arg0)); }
  void test_case_2() { string Arg0 = "00000"; int Arg1 = -1; verify_case(2, Arg1, getmin(Arg0)); }
  void test_case_3() { string Arg0 = "110011011"; int Arg1 = 3; verify_case(3, Arg1, getmin(Arg0)); }
  void test_case_4() { string Arg0 = "1000101011"; int Arg1 = -1; verify_case(4, Arg1, getmin(Arg0)); }
  void test_case_5() { string Arg0 = "111011100110101100101110111"; int Arg1 = 5; verify_case(5, Arg1, getmin(Arg0)); }

  // END CUT HERE

};
// BEGIN CUT HERE
int main()
{
  CuttingBitString ___test;
  ___test.run_test(-1);
}
// END CUT HERE
