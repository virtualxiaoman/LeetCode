//#include <iostream>
//#include <vector>
//#include <unordered_set>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    int longestConsecutive(vector<int>& nums) {
//        unordered_set<int> num_set;
//        for (const int& num : nums) {
//            num_set.insert(num);
//        }
//
//        int longestStreak = 0;
//
//        for (const int& num : num_set) {
//            if (!num_set.count(num - 1)) {
//                int currentNum = num;
//                int currentStreak = 1;
//
//                while (num_set.count(currentNum + 1)) {
//                    currentNum += 1;
//                    currentStreak += 1;
//                }
//
//                longestStreak = max(longestStreak, currentStreak);
//            }
//        }
//
//        return longestStreak;
//    }
//};
//
//
//int main()
//{
//    vector<int> nums = {100, 4, 200, 1, 3, 2};
//    Solution solution;
//    cout << solution.longestConsecutive(nums) << endl;
//    return 0;
//}