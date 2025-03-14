//// Created by virtual小满 on 2025/3/3.
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    int binarySearch(vector<int> &nums, int target, bool lower) {
//        int left = 0, right = nums.size() - 1, ans = nums.size();
//        while (left <= right) {
//            int mid = (left + right) / 2;
//            // 如果lower为True，条件为>=，那么right会一直减到<target，ans就是第一个>=target的下标
//            if (nums[mid] > target || (lower && nums[mid] >= target)) {
//                right = mid - 1;
//                ans = mid;
//            } else {
//                left = mid + 1;
//            }
//        }
//        return ans;
//    }
//
//    vector<int> searchRange(vector<int> &nums, int target) {
//        int leftIdx = binarySearch(nums, target, true);  // target的一个下标
//        int rightIdx = binarySearch(nums, target, false) - 1;  // 这是第一个>=target的前一个下标，也就是target的最后一个下标
////        cout << leftIdx << rightIdx << endl;
//        if (leftIdx <= rightIdx && rightIdx < nums.size() && nums[leftIdx] == target && nums[rightIdx] == target) {
//            return vector<int>{leftIdx, rightIdx};
//        }
//        return vector<int>{-1, -1};
//    }
//};
//
//
//int main() {
//    vector<int> nums = {5, 7, 7, 8, 8, 10};
//    int target = 8;
//    Solution s;
//    vector<int> ans = s.searchRange(nums, target);
//    cout << ans[0] << ans[1] << endl;
//
//    return 0;
//}