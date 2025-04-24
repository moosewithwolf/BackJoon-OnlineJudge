// https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/description/?envType=problem-list-v2&envId=greedy

#include <iostream>

class Solution {
  public:
    int minPartitions(std::string n) {
        int curr{};
        for (auto i : n) {
            if (i - '0' > curr) {
                if (i - '0' == 9)
                    return 9;
                curr = i - '0';
            }
        }
        return curr;
    }
};

int main() {
    Solution A;
    std::cout << A.minPartitions("32") << "\n";                   // 3
    std::cout << A.minPartitions("82734") << "\n";                // 8
    std::cout << A.minPartitions("27346209830709182346") << "\n"; // 9
    return 0;
}

/**
 * Explaination:
 * This problem is a trick. Since you can only add 0 or 1 in each digit,
 * the answer is simply the highest digit in the input string.
 */