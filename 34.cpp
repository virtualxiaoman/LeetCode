//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> searchRange(vector<int>& nums, int target) {
//        int left = 0, right = nums.size() - 1;
//        int pos0, pos_final=-1;
//        while(left<=right){
//            pos0 = ((right-left)>>1) + left;
//            if(nums[pos0] < target)
//            {
//                left = pos0+1;
//            }
//            else if(nums[pos0]>target)
//            {
//                right = pos0-1;
//            }
//            else
//            {
//                pos_final = pos0;
//                break;
//            }
//        }
//        if (pos_final==-1)
//            return vector<int>{-1, -1};
//        int pos1, pos2, ans1=pos_final, ans2=pos_final;
//        for(pos1 = pos_final; pos1>=0&&nums[pos1]==target; --pos1){ans1=pos1;}
//        for(pos2 = pos_final; (pos2<=(nums.size()-1))&&nums[pos2]==target; ++pos2){ans2=pos2;}
//        return vector<int>{ans1, ans2};
//    }
//};
//
//
//int main()
//{
//    vector<int> nums = {1};
//    int target = 1;
//    Solution s = Solution();
//    vector<int> ans = s.searchRange(nums, target);
//    for(auto x: ans)
//        cout << x << ' ';
//    return 0;
//}