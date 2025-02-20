//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int search(vector<int>& nums, int target) {
//        int left = 0, right = nums.size()-1;
//        int pos;
//        while(left<=right)
//        {
//            pos = (left + right) / 2;
//            if (nums[pos] == target)
//                return pos;
//            else if (nums[pos] < target) {
//                left = pos + 1;
//            } else {
//                right = pos - 1;
//            }
//        }
//        return -1;
//    }
//};
//
//int main()
//{
//    Solution s = Solution();
//    vector<int>nums = {-1,0,3,5,9,12};
//    int target = 2;
//    int ans = s.search(nums, target);
//    cout << ans;
//}
//
