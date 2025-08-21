#include <iostream>
#include <vector>
using namespace std;
int trap_RainWater(const vector<int>& height) {
    int n = height.size();
    if (n < 3) return 0; 
    int left = 0, right = n - 1;  
    int leftMax = 0, rightMax = 0; 
    int totalWater = 0;
    while (left <= right) {
        if (height[left] <= height[right]) {
          
            if (height[left] >= leftMax) {
                leftMax = height[left]; 
            } else {
                totalWater += leftMax - height[left]; 
            }
            left++; 
        } else {
            
            if (height[right] >= rightMax) {
                rightMax = height[right]; 
            } else {
                totalWater += rightMax - height[right]; 
            }
            right--; 
        }
    }

    return totalWater;
}

int main() {
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Trapped Water: " << trap_RainWater(height) << endl; 
    return 0;
}
