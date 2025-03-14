//// Created by virtual小满 on 2025/3/10.
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    int removeElement(vector<int>& nums, int val) {
//        int slow = 0;
//        for (int fast = 0; fast < nums.size(); fast++) {
//            // 跑得快的那个先去寻找共同目标
//            if (nums[fast] != val) {
//                nums[slow++] = nums[fast];  // 如果找到了就送给跑得慢的那个，然后跑得慢的也离目标近一点
//            }
//        }
//        return slow;  // 跑得快的一直奔跑到生命的尽头后，最终留下跑得慢的一方
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> nums = {3, 2, 2, 3};
//    int ans = s.removeElement(nums, 2);
//    cout << ans << endl;
//    return 0;
//}