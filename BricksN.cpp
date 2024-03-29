#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;

#define dump(x)  cerr << #x << " = " << (x) << endl;
inline int toInt(string s){int v;istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x){ostringstream sout;sout<<x;return sout.str();}

class BricksN {
     public:

     int countStructures(int w, int h, int k) {

         

     }

     
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 3; int Arg1 = 1; int Arg2 = 3; int Arg3 = 13; verify_case(0, Arg3, countStructures(Arg0, Arg1, Arg2)); }
	void test_case_1() { int Arg0 = 3; int Arg1 = 2; int Arg2 = 3; int Arg3 = 83; verify_case(1, Arg3, countStructures(Arg0, Arg1, Arg2)); }
	void test_case_2() { int Arg0 = 1; int Arg1 = 5; int Arg2 = 1; int Arg3 = 6; verify_case(2, Arg3, countStructures(Arg0, Arg1, Arg2)); }
	void test_case_3() { int Arg0 = 10; int Arg1 = 10; int Arg2 = 3; int Arg3 = 288535435; verify_case(3, Arg3, countStructures(Arg0, Arg1, Arg2)); }

// END CUT HERE


};



// BEGIN CUT HERE

int main() {

     BricksN ___test;

     ___test.run_test(-1);

}

// END CUT HERE
