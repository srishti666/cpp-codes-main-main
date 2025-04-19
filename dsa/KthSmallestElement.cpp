#include <iostream>
#include <queue>
#include <vector>

int findKthSmallestElement(std::vector<int>& arr, int k) {
    std::priority_queue<int> maxHeap;

    for (int i = 0; i < arr.size(); i++) {
        maxHeap.push(arr[i]);

        if (maxHeap.size() > k) {
            maxHeap.pop();
        }
    }

    return maxHeap.top();
}

int main() {
    std::vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;
    int result = findKthSmallestElement(arr, k);
    std::cout << "The " << k << "rd smallest element is " << result << std::endl;
    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"Hello World!";
//     return 0;
// }