#include <iostream>
#include <vector>
using namespace std;
int find_Missing_Number(const vector<int>& nums) {
    int totalCount = nums.size() + 1;                   
    int expectedSum = totalCount * (totalCount + 1) / 2; 
    int actualSum = 0;
    for (int number : nums) {
        actualSum += number;                        
    }
    return expectedSum - actualSum;                    
}
int main() {
    vector<int> arr = {1, 2, 4, 5}; 
    cout << "The missing number is " << find_Missing_Number(arr) << ".\n";
    return 0;
}
