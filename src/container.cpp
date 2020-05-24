#include <vector>
#include <unordered_map>
#include <string>
#include <map>

// 有以下容器：
// multimap 允许存在多个相同的key
using namespace std;

struct Location
{
	unsigned int fileno;
	size_t offset;
};

std::unordered_map<string, vector<Location>> allWords;

int main() {
    std::vector<string> owords;
    owords.reserve(allWords.size());
    std::multimap<int, int> mV;
}
