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

class FoxAndMountainEasy
{
public:
  string possible(int n, int h0, int hn, string history)
  {
    int h = h0, minH = 0;
    for (unsigned int i = 0; i < history.size(); ++i) {
      if (history[i] == 'U') {
        ++h;
      } else {
        --h;
      }
      minH = min(minH, h);
    }


    minH = -minH;

    h += minH;
    n -= (minH + (int)history.size() + abs(hn-h));


    if (n >= 0 && n % 2 == 0)
      return "YES";
    return "NO";
  }
  
// BEGIN CUT HERE
public:
  void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
private:
  template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
  void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
  void test_case_0() { int Arg0 = 4; int Arg1 = 0; int Arg2 = 4; string Arg3 = "UU"; string Arg4 = "YES"; verify_case(0, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }
  void test_case_1() { int Arg0 = 4; int Arg1 = 0; int Arg2 = 4; string Arg3 = "D"; string Arg4 = "NO"; verify_case(1, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }
  void test_case_2() { int Arg0 = 4; int Arg1 = 100000; int Arg2 = 100000; string Arg3 = "DDU"; string Arg4 = "YES"; verify_case(2, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }
  void test_case_3() { int Arg0 = 4; int Arg1 = 0; int Arg2 = 0; string Arg3 = "DDU"; string Arg4 = "NO"; verify_case(3, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }
  void test_case_4() { int Arg0 = 20; int Arg1 = 20; int Arg2 = 20; string Arg3 = "UDUDUDUDUD"; string Arg4 = "YES"; verify_case(4, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }
  void test_case_5() { int Arg0 = 20; int Arg1 = 0; int Arg2 = 0; string Arg3 = "UUUUUUUUUU"; string Arg4 = "YES"; verify_case(5, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }
  void test_case_6() { int Arg0 = 20; int Arg1 = 0; int Arg2 = 0; string Arg3 = "UUUUUUUUUUU"; string Arg4 = "NO"; verify_case(6, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE

};
// BEGIN CUT HERE
int main()
{
  FoxAndMountainEasy ___test;
   ___test.run_test(-1);
}
// END CUT HERE
