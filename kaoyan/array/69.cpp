//// 给你一个非负整数 x ，计算并返回 x 的 算术平方根 。
////由于返回类型是整数，结果只保留 整数部分 ，小数部分将被 舍去 。
////输入：x = 8
////输出：2
//
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//class Solution {
//public:
//    int mySqrt(int x) {
//        int left = 0, right = x;
//        long long middle;
//        while (left <= right) {
//            middle = (left + right) / 2;
//            if (middle * middle < x)
//                left = middle + 1;
//            else if (middle * middle > x)
//                right = middle - 1;
//            else
//                return middle;
//            cout << 'L' << left << 'R' << right << endl;
//        }
//        return left - 1;
//    }
//};
//
//int main() {
//    Solution s;
//    int ans = s.mySqrt(2147395599);
//    cout << ans;
//    return 0;
//}