//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//// 暴力
////class Solution {
////public:
////    int minSubArrayLen(int target, vector<int>& nums) {
////        int size = nums.size();
////        int count_all = 0;
////        for (auto it: nums)
////            count_all += it;
////        if (count_all < target)
////            return 0;
//////        cout << count_all << endl;
////
////        int ans = INT_MAX, left = 0, right = size - 1;
////        for(int l_count= count_all; left<=right; left++)
////        {
////            if (left>0)
////                l_count -= nums[left-1];
//////            cout << "[]" << left << ' ' << right << "   " << l_count << endl;
////            for(int r_count=l_count, right=size-1; left<=right; right--)
////            {
////                if(r_count<target)
////                    break;
////                else {
////                    ans = min(right - left + 1, ans);
////                    r_count -= nums[right];
////                }
//////                cout << ans << ' ' << left << ' ' << right << "   " << r_count << endl;
////            }
////        }
////        return ans;
////    }
////};
//// 滑动窗口
//class Solution {
//public:
//    int minSubArrayLen(int s, vector<int>& nums) {
//        int result = INT32_MAX;
//        int sum = 0; // 滑动窗口数值之和
//        int i = 0; // 滑动窗口起始位置
//        int subLength = 0; // 滑动窗口的长度
//        for (int j = 0; j < nums.size(); j++) {
//            sum += nums[j];
//            // 注意这里使用while，每次更新 i（起始位置），并不断比较子序列是否符合条件
//            while (sum >= s) {
//                subLength = (j - i + 1); // 取子序列的长度
//                result = result < subLength ? result : subLength;
//                sum -= nums[i++]; // 这里体现出滑动窗口的精髓之处，不断变更i（子序列的起始位置）
//            }
//        }
//        // 如果result没有被赋值的话，就返回0，说明没有符合条件的子序列
//        return result == INT32_MAX ? 0 : result;
//    }
//};
//int main()
//{
//    vector<int> nums = {2,3,1,2,4,3};
//    Solution s = Solution();
//    int ans = s.minSubArrayLen(7, nums);
//    cout << ans;
//    return 0;
//}