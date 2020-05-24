#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> v;
    v.push_back("9");

    string prefix("hi ");

    for_each(v.begin(), v.end(), [&prefix](const auto& a) { //lambda在c++14之后允许使用auto
	    cout << prefix + a << endl;
    }); // outputs hi 9, hi 12, hi 13 etc
    // vector<int> a;
    // std::sort(a.begin(), a.end());
    // std::sort(a.begin(), a.end(), [](const auto& a, const auto& b){return a < b;});
}