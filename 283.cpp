//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//
//using namespace std;
//
////
//////class Solution {
//////public:
//////    void moveZeroes(vector<int>& nums) {
//////        for(auto it = nums.end() - 1; it != nums.begin() - 1; --it)
//////        {
//////            if(*it == 0)
//////            {
//////                nums.erase(it);
//////                nums.push_back(0);
//////            }
//////        }
//////    }
//////};
////class Solution {
////public:
////    void moveZeroes(vector<int>& nums) {
////        int j=0;
////        for(int i=0; i<nums.size(); ++i)
////        {
////            if(nums[i]!=0) {
////                swap(nums[i], nums[j]);
////                j++;
////            }
////        }
////    }
////};
//class Solution {
//public:
//    void moveZeroes(vector<int> &nums) {
//        int size = nums.size();
//        int left = 0;
//        int right = 0;
//        for (; right < size; right++) {
//            if (nums[right] != 0) {
//                nums[left] = nums[right];
//                left++;
//            }
//        }
//        for(; left<size; left++)
//        {
//            nums[left] = 0;
//        }
//    }
//};
//
//int main() {
//    vector<int> nums = {33, 0, 1, 0, 3, 12};
//    Solution solution;
//    solution.moveZeroes(nums);
//    for (auto num: nums) {
//        cout << num << " ";
//    }
//    cout << endl;  // 33 1 3 12 0 0
//    return 0;
//}