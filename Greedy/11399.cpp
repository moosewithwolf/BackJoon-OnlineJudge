// https://www.acmicpc.net/problem/11399
#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    int size{}, total{}, current{};
    std::cin >> size;
    std::vector<int> arr(size); 
    for(int i{}; i<size; i++){
        std::cin >> arr[i];
    }

    std::sort(arr.begin(), arr.end());

    for(int i{}; i < arr.size(); i++){
        current += arr[i];
        total += current;
    }
    std::cout << total << std::endl;
    return 0;
}

