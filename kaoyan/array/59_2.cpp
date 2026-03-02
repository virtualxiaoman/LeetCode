//// Created by virtual小满 on 2025/3/21.
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> generateMatrix(int n) {
//        int cur = 1, n2 = n * n;  // cur是当前生成的元素
//        int turn = 0;  // 当前轮次
//        vector<vector<int>> ans(n, vector<int>(n, 0));
//        for (; cur < n2; turn++) {
//            for (int i = turn; i < n - 1 - turn; i++)
//                ans[turn][i] = cur++;
//            for (int i = turn; i < n - 1 - turn; i++)
//                ans[i][n - 1 - turn] = cur++;
//            for (int i = n - 1 - turn; i > turn; i--)
//                ans[n - 1 - turn][i] = cur++;
//            for (int i = n - 1 - turn; i > turn; i--)
//                ans[i][turn] = cur++;
//            // cout << cur << ' ' << turn << endl;
//        }
//        if (n % 2 != 0) {
//            ans[n / 2][n / 2] = cur;
//        }
//        return ans;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<vector<int>> ans = s.generateMatrix(5);
//    for (auto &an: ans) { // 遍历每一行
//        for (int j: an) { // 遍历每一列
//            cout << j << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}