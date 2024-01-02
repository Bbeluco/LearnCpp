#include <iostream>
#include <vector>

template<typename T>
T findMax(const std::vector<T>& arr) {
    int answer{0};
    for (size_t i = 0; i < arr.size(); i++) {
        if(arr[i] > answer){
            answer = arr[i];
        }
    }
    return answer;
}

int main() {
    std::vector<int> testScore { 84, 92, 76, 81, 56 };
    std::cout << "The max score is: " << findMax(testScore) << '\n';
    return 0;
}