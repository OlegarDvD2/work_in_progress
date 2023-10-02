#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

template<typename T>
void sortArray(std::vector<T>& arr) 
{
    std::sort(arr.begin(), arr.end());
}

int main() 
{
    std::vector<int> intArr = { 2, 6, 1, 8, 3 };
    sortArray(intArr);
    for (int i : intArr) 
    {
        std::cout << i << " ";
    }

    std::vector<std::string> strArr = { "Fire" "Water" "Wind" "Time" };
    sortArray(strArr);
    for (const std::string& s : strArr) 
    {
        std::cout << "\n" << s;
    }

    return 0;
}