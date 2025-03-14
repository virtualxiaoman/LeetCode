//// Created by virtual小满 on 2025/3/3.
//// 给你一个正整数 num 。如果 num 是一个完全平方数，则返回 true ，否则返回 false 。
////完全平方数 是一个可以写成某个整数的平方的整数。换句话说，它可以写成某个整数和自身的乘积。
////示例 1：
////输入：num = 16
////输出：true
////解释：返回 true ，因为 4 * 4 = 16 且 4 是一个整数。
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//
//class Solution {
//public:
//    bool isPerfectSquare(int num) {
//        int left = 0, right = num;
//        long long middle;
//        while (left <= right) {
//            middle = (left + right) / 2;
//            if (middle * middle < num)
//                left = middle + 1;
//            else if (middle * middle > num)
//                right = middle - 1;
//            else
//                return true;
//        }
//
//        return false;
//    }
//};
//
//int main() {
//    Solution s;
//    bool ans = s.isPerfectSquare(12);
//    cout << ans;
//    return 0;
//}