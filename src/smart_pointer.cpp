
#include <map>
#include <iostream>
#include <vector>

//移动构造函数
//右值引用
//区分左值和右值的关键点：看是否能对表达式求值，如果可以的话是右值，不可以的话是左值
//By using std::move it is possible to store std::unique_ptr instances in containers, which is both safe and fast.

using namespace std;

// struct SmartFP
// {
//   SmartFP(const char* fname, const char* mode)
//   {
//     d_fp = fopen(fname, mode);
//     if(!d_fp)
//       throw std::runtime_error("Can't open file: " + "error");
//   }

//   SmartFP(SmartFP&& src) // move constructor. Note "&&"
//   {
//     d_fp = src.d_fp;
//     src.d_fp = 0;
//   }

//   ~SmartFP()
//   {
//     if(d_fp)
//       fclose(d_fp);
//   }
//   FILE* d_fp{0};
// };

int main() {
     vector<int> vi {1, 2, 3, 4};
}