//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
////class Solution {
////public:
////    vector<int> sortedSquares(vector<int>& nums) {
////        vector<int> ans;
////        int size = nums.size();
////        if(size==1)
////            return vector<int> {nums[0]*nums[0]};
////        int left = 0, right = size-1;
////        int middle = (right - left) / 2 + left;
////
////        for ( ; left<right; )
////        {
////            cout << middle << ' ';
////            if (middle+1>=size)
////            {
////                left = middle;
////                right = middle + 1;
////                break;
////            }
////            else if ((nums[middle]<=0) and (nums[middle+1]>=0))
////            {
////                left = middle;
////                right = middle + 1;
////                break;
////            }
////            else if (nums[middle+1]<0)
////            {
////                left = middle;
////                middle = (right - left) / 2 + left;
////            }
////            else if (nums[middle]>0)
////            {
////                right = middle;
////                middle = (right - left) / 2 + left;
////            }
////            else
////            {
////                left = middle;
////                right = middle + 1;
////                break;
////            }
////        }
////        cout << left << ' ' << right << endl;
////
////        for(; left>=0 and right<size; )
////        {
//////            cout << left << right << "     " << nums[left] << ' ' << nums[right] << endl;
////            if(nums[left]+nums[right]<=0)
////            {
////                ans.push_back(nums[right]*nums[right]);
////                right++;
////            }
////            else{
////                ans.push_back(nums[left]*nums[left]);
////                left -- ;
////            }
////        }
////
////        for(; left>=0; left--)  ans.push_back(nums[left]*nums[left]);
////        for(; right<size; right++)  ans.push_back(nums[right]*nums[right]);
////
////        return ans;
////    }
////};
//
//// 上面是小丑，都要对比为什么不直接两面夹击，偏要从中间开始
//class Solution {
//public:
//    vector<int> sortedSquares(vector<int>& nums) {
//        int size = nums.size();
//        vector<int> ans(nums.size());
//        int current = size-1;
//        for(int left = 0, right= current; current>=0; )
//        {
//            cout << current << nums[left] << nums[right] << endl;
//            if (nums[left]+nums[right]<=0)
//            {
//                ans[current] = nums[left] * nums[left];
//                left++;
//            }
//            else
//            {
//                ans[current] = nums[right] * nums[right];
//                right--;
//            }
//            current--;
//        }
//        return ans;
//    }
//};
//
//int main()
//{
////    vector<int> nums = {-4,-1,0,3,10};
//    vector<int> nums = {-5,-3,-2,-1};
//    Solution s = Solution();
//    vector<int> ans = s.sortedSquares(nums);
//    for(auto i : ans)
//    {
//        cout << i << ' ';
//    }
//    return 0;
//}
