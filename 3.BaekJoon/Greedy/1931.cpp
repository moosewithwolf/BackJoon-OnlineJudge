#include <algorithm>
#include <iostream>
#include <vector>

void print(const std::vector<std::pair<int, int>> &meetingTimes) {
  for (int i{}; i < meetingTimes.size(); i++) {
    std::cout << meetingTimes[i].second;
    std::cout << meetingTimes[i].first;
    if(meetingTimes.size()-1 > i) std::cout << ", ";
  }
  std::cout << std::endl;
}

int getCount(std::vector<std::pair<int, int>>& meetingTimes){
    int cnt{}, currEndTime{};
    for(int i{}; i<meetingTimes.size(); i++){
        if(currEndTime <= meetingTimes[i].second){
            cnt++;
            currEndTime = meetingTimes[i].first;
        }
    }
    return cnt;
}

int main() {
  int meetingCount{};
  std::cin >> meetingCount;
  // std::vector<std::vector<int>> meetingTimes(meetingCount,
  // std::vector<int>(2));
  std::vector<std::pair<int, int>> meetingTimes(meetingCount);

  for (int i{}; i < meetingCount; i++) {
    std::cin >> meetingTimes[i].second;
    std::cin >> meetingTimes[i].first;
  }
      print(meetingTimes);

  std::sort(meetingTimes.begin(), meetingTimes.end());
      print(meetingTimes);

  std::cout << getCount(meetingTimes);
  return 0;
}