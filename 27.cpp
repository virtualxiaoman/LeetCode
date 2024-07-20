//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
////class Solution {
////public:
////    int removeElement(vector<int>& nums, int val) {
////        int n = nums.size();
////        int left = 0;
////        for (int right = 0; right < n; right++) {
////            if (nums[right] != val) {
////                nums[left] = nums[right];
////                left++;
////            }
////        }
////        return left;
////    }
////};
//
//class Solution {
//public:
//    int removeElement(vector<int>& nums, int val) {
//        int left = 0, right = nums.size()-1;
//        while (left <= right) {
//            if (nums[left] == val) {
//                nums[left] = nums[right];
//                right--;
//            } else {
//                left++;
//            }
//        }
//        return left;
//    }
//};
//
//
//int main()
//{
//    Solution s = Solution();
//    vector<int> nums = { 3, 2, 2, 3 };
//    int val = 3;
//    int ans = s.removeElement(nums, val);
//    cout << ans;
//    return 0;
//}