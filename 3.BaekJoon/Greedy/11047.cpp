// https://www.acmicpc.net/problem/11047
#include <iostream>
#include <algorithm>
#include <vector>

int getCoinCount(const std::vector<int>& arr, int k){
    int total{};
    for(int i{}; i<arr.size(); i++){
        total += (k / arr[i]);
        k %= arr[i];
    }
    return total;
}

int main(){
    int n{}, k{};
    std::cin >> n;
    std::cin >> k;
    std::vector<int> arr(n);
    for(int i=n-1; i>=0; i--){
        std::cin >> arr[i];
    }

    std::cout << getCoinCount(arr, k);
    return 0;
}
