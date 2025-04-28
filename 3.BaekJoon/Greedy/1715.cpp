#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    static int total{};    
    int n{}, curr{};
    std::cin >> n;
    std::vector<int> array(n);

    for(int i{}; i<n; i++){
        std::cin >> array[i];
    }

    std::sort(array.begin(), array.end());
    curr = array[0];

    for(int i{1}; i<n; i++){
        curr += array[i];
        total += curr;
    }
    std::cout << total << std::endl;

    return 0;
}