//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//
//class Solution {
//public:
//    int searchInsert(vector<int>& nums, int target) {
//        int left = 0, right = nums.size() - 1;
//        int pos;
//        while(left<=right)
//        {
//            pos = ((right-left)>>1) + left;
//            if(nums[pos]>target) { right = pos - 1;}
//            else if (nums[pos]<target) { left = pos + 1;}
//            else
//                return pos;
//        }
//        // 引理： right 所指向的位置是小于 target 的最大元素的位置
//        // 这是因为退出循环的条件是left越过right。在nums[pos]>或<target的情况下都是right对应的num小于target
//        // 由引理，说明right+1应该是target的位置。
//        return right+1;
//
//    }
//};
//
//int main()
//{
//    vector<int> nums = {1,3,5,6};
//    int target = 2;
//    Solution s = Solution();
//    cout << s.searchInsert(nums, target);
//
//    return 0;
//}