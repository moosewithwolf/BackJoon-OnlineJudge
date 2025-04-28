#include <iostream>
#include <vector>

std::vector<std::vector<int>> grouping(const std::vector<int>& groupSizes) {
    int len = groupSizes.size();
    std::vector<std::vector<int>> buckets(len+1);
    std::vector<std::vector<int>> result;

    for (int i = 0; i < len; ++i) {
        int s = groupSizes[i];
        buckets[s].push_back(i);
        if (buckets[s].size() == s) {
            result.push_back(buckets[s]);
            buckets[s].clear();
        }
    }
    return result;
}

int main() {
    std::vector<int> groupSizes = {0};
    auto groups = grouping(groupSizes);

    for (const auto& g : groups) {
        std::cout << "{ ";
        for (int x : g) std::cout << x << ' ';
        std::cout << "}";
    }
    return 0;
}
