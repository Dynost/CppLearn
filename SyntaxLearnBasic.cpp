#include <iostream>
#include <chrono>


int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    std::string str = "Hello World";
    std::cout << str << std::endl;
    
    auto stop = std::chrono::high_resolution_clock::now();

    // 3. Calculate the duration
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    // 4. Print the result in the console
    std::cout << "Time taken: " << duration.count() << " microseconds\n" << std::endl;
    return 0;
}
