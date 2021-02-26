#include <iostream>
#include <chrono>
const int total_iter = 1000000;
int main() {
    std::cout << "--- Copy Initialization ---" << std::endl;
    auto start_time = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < total_iter; i ++) {
        int a = 5;
        a = 6;
    }
    auto end_time = std::chrono::high_resolution_clock::now();
    std::cout << "spent time (us):" << std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count() << std::endl;
    std::cout << "---------------------------" << std::endl;

    std::cout << "--- Direct Initialization ---" << std::endl;
    start_time = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < total_iter; i ++) {
        int a(5);
        a = 6;
    }
    end_time = std::chrono::high_resolution_clock::now();
    std::cout << "spent time (us):" << std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count() << std::endl;
    std::cout << "---------------------------" << std::endl;

    std::cout << "--- List Initialization ---" << std::endl;
    start_time = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < total_iter; i ++) {
        int a{5};
        a = 6;
    }
    end_time = std::chrono::high_resolution_clock::now();
    std::cout << "spent time (us):" << std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count() << std::endl;
    std::cout << "---------------------------" << std::endl;
    return 0;
}