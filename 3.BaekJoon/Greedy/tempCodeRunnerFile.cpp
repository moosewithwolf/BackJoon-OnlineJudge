void print(const std::vector<std::pair<int, int>> &meetingTimes) {
  for (int i{}; i < meetingTimes.size(); i++) {
    std::cout << meetingTimes[i].second;
    std::cout << meetingTimes[i].first;
    if(meetingTimes.size()-1 > i) std::cout << ", ";
  }
  std::cout << std::endl;
}