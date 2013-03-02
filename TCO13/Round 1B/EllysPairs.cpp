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

class EllysPairs
{
public:
  int getDifference(vector <int> knowledge)
  {
    int n = (int)knowledge.size();
    sort(knowledge.begin(), knowledge.end());
    int opt_max = -INF, opt_min = INF;
    for (int i = 0; i < n/2; ++i) {
      int v = knowledge[i] + knowledge[n-1-i];
      opt_max = max(opt_max, v);
      opt_min = min(opt_min, v);
    }
    return opt_max - opt_min;
  }
  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {2, 6, 4, 3}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(0, Arg1, getDifference(Arg0)); }
	void test_case_1() { int Arr0[] = {1, 1, 1, 1, 1, 1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(1, Arg1, getDifference(Arg0)); }
	void test_case_2() { int Arr0[] = {4, 2, 4, 2, 1, 3, 3, 7}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(2, Arg1, getDifference(Arg0)); }
	void test_case_3() { int Arr0[] = {5, 1, 8, 8, 13, 7, 6, 2, 1, 9, 5, 11, 3, 4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(3, Arg1, getDifference(Arg0)); }

// END CUT HERE

};
// BEGIN CUT HERE
int main()
{
  EllysPairs ___test;
   ___test.run_test(-1);
}
// END CUT HERE
