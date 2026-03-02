//// Created by virtual小满 on 2025/3/21.
//// 给你一个 m 行 n 列的矩阵 matrix ，请按照 顺时针螺旋顺序 ，返回矩阵中的所有元素。
//// 输入：matrix = [[1,2,3],[4,5,6],[7,8,9]]
//// 输出：[1,2,3,6,9,8,7,4,5]
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> spiralOrder(vector<vector<int>> &matrix) {
//        int m = matrix.size();
//        int n = matrix[0].size();
//        int cur = 1, mn = m * n;  // cur是当前读取的元素
//        int turn = 0;  // 当前轮次
//        vector<int> ans;
//        for (; cur <= mn; turn++) {
//            for (int i = turn; i <= n - 1 - turn; i++, cur++)
//                ans.push_back(matrix[turn][i]);
//            for (int i = turn + 1; i <= m - 1 - turn; i++, cur++)
//                ans.push_back(matrix[i][n - 1 - turn]);
//            if (cur > mn)
//                break;
//            for (int i = n - 2 - turn; i >= turn; i--, cur++)
//                ans.push_back(matrix[m - 1 - turn][i]);
//            for (int i = m - 2 - turn; i >= turn + 1; i--, cur++)
//                ans.push_back(matrix[i][turn]);
////            cout << cur << ' ' << turn << endl;
//        }
////        if (m == n and m % 2 != 0) {
////            ans.push_back(matrix[m / 2][n / 2]);
////        }
//        return ans;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<vector<int>> matrix = {{1, 2,  3,  4},
//                                  {5, 6,  7,  8},
//                                  {9, 10, 11, 12}};
////    vector<vector<int>> matrix = {{1, 2, 3},
////                                  {4, 5, 6},
////                                  {7, 8, 9}};
//    vector<int> ans = s.spiralOrder(matrix);
//    for (auto it: ans)
//        cout << it << ' ';
//    return 0;
//}