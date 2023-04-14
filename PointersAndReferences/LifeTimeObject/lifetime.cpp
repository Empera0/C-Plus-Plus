#include <iostream>
#include <thread>
#include <chrono>

void print_message(const std::string& message) {
    std::cout << message << std::endl;
}

int main() {
    std::string message = "Hello, world!"; 
    std::thread t(print_message, message); 
    std::this_thread::sleep_for(std::chrono::seconds(1)); 
    message = "Goodbye!"; 
    t.join(); 
    return 0;
}