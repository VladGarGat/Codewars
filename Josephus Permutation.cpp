#include <vector>
#include <list>
using namespace std;
vector<int> josephus(vector<int> result, int k) {

    int current_index = 0;
    list<int> sequence(result.begin(), result.end());

    auto it = sequence.begin();
    while (!sequence.empty())
    {
        for (int i = 0; i < k - 1; ++i)
        {
            ++it;
            if (it == sequence.end())
                it = sequence.begin();
        }
        result[current_index++] = *it;
        it = sequence.erase(it);
        if (it == sequence.end()) it = sequence.begin();
    }
    return result;
}
