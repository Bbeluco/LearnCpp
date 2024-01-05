#include <iostream>
#include <vector>
#include <utility>
#include <limits>

template<typename T>
std::pair<int, int> get_index_min_and_max(const std::vector<T>& arr) {
    int min_index{0};
    int max_index{0};
    for(std::size_t i{0}; i < arr.size(); ++i) {
        if(arr[i] > arr[max_index]){
            max_index = i;
        }

        if(arr[i] < arr[min_index]) {
            min_index = i;
        }
    }

    return { min_index, max_index };
}

template<typename T>
void print_values(const std::pair<int,int>& indices, const std::vector<T>& vec) {
    std::cout << "The min element has index " << indices.first << " and value " << vec[indices.first] << '\n';
    std::cout << "The max element has index " << indices.second << " and value " << vec[indices.second] << '\n';
}

template<typename T>
void print_vector(const std::vector<T>& vec) {
    std::cout << "With array ( ";
    for(const auto& number : vec) {
        std::cout << number << ", ";
    }
    std::cout << "):\n";
}

std::vector<int> get_user_input() {
    std::vector<int> values{};
    std::cout << "Enter numbers to add (use -1 to stop): ";
    while(std::cin) {
        int current_number{};
        std::cin >> current_number;

        if (!std::cin) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if(current_number == -1) {
            break;
        }

        values.push_back(current_number);
    }

    return values;
}

int main() {
    std::vector<int> user_numbers{ get_user_input() };
    std::pair<int, int> indices { get_index_min_and_max(user_numbers) };
    print_vector(user_numbers);
    print_values(indices, user_numbers);
    // std::vector v1 { 3, 8, 2, 5, 7, 8, 3 };
    // std::pair<int, int> indices_int { get_index_min_and_max(v1) };
    // print_vector(v1);
    // print_values(indices_int, v1);

    // std::cout << '\n';

    // std::vector v2 { 5.5, 2.7, 3.3, 7.6, 1.2, 8.8, 6.6 };
    // std::pair<int, int> indices_double { get_index_min_and_max(v2) };
    // print_vector(v2);
    // print_values(indices_double, v2);
    return 0;
}