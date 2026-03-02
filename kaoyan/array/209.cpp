////给定一个含有 n 个正整数的数组和一个正整数 target 。
////找出该数组中满足其总和大于等于 target 的长度最小的 子数组 [numsl, numsl+1, ..., numsr-1, numsr] ，
//// 并返回其长度。如果不存在符合条件的子数组，返回 0 。
////示例 1：
////输入：target = 7, nums = [2,3,1,2,4,3]
////输出：2
////解释：子数组 [4,3] 是该条件下的长度最小的子数组。
//
//// Created by virtual小满 on 2025/3/17.
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    int minSubArrayLen(int target, vector<int> &nums) {
//        int size = nums.size();
//        int slow = 0, fast = 0, ans = INT_MAX, sum = nums[slow];
//        while (fast < size) {
//            cout << slow << ' ' << fast << ':' << sum << endl;
//            if (sum >= target) {
//                ans = min(ans, fast - slow + 1);
//                sum -= nums[slow++];
//            } else {
//                if (++fast < size)
//                    sum += nums[fast];
//            }
//        }
//        cout << slow << fast << sum << endl;
//        if (ans == INT_MAX)
//            return 0;
//        return ans;
//    }
//};
//
//int main() {
//    vector<int> nums = {5, 1, 3, 5, 10, 7, 4, 9, 2, 8};
//    Solution s;
//    int ans = s.minSubArrayLen(5, nums);
//    cout << ans;
//    return 0;
//}