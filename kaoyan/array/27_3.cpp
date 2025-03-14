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
//    int removeElement(vector<int> &nums, int val) {
//        int slow = 0, fast = nums.size() - 1;
//        // 众里寻他千百度，蓦然回首，那人却在灯火阑珊处
//        while (slow <= fast) {
//            // 如果slow找错了，那就请fast给一个值（但也不一定是目标值）
//            if (nums[slow] == val) {
//                nums[slow] = nums[fast--];
//            } else {
//                slow++;  // slow前进一步
//            }
//        }
//        return slow;
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