//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        int ans = 1;
//        int size = nums.size();
//        int left = 0;  // 左指针
//        int right = 1;  // 右指针
//        for( ; right<size; right++)
//        {
//            if (nums[left] != nums[right])
//            {
//                // 说明不是重复
//                left++;
//                nums[left] = nums[right];
//                ans++;
//            }
//        }
//
////        for (auto i: nums)
////            cout << i << ' ';
//
//
//        return ans;
//    }
//};
//
//int main()
//{
//    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
//    Solution s = Solution();
//    int ans = s.removeDuplicates(nums);
//    cout << ans;  // 5, nums = [0,1,2,3,4]
//}